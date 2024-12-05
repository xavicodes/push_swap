/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xaviermonteiro <xaviermonteiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:22:42 by xaviermonte       #+#    #+#             */
/*   Updated: 2024/11/29 12:07:27 by xaviermonte      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

void check_ifnumber(char **argv)
{
    int i = 1;
    int t;

    while (argv[i])
    {
        t = 0;
        while (argv[i][t])
        {
            if (argv[i][t] < '0' || argv[i][t] > '9' || argv[i][t] != '-' || argv[i][t] != '+')
            {
                write(1, "Error: Can't have characters\n", 29);
                return;
            }
            t++;
        }
        i++;
    }
}
void free_stack( t_stack_node **stack)
{
    t_stack_node *current;
    t_stack_node *temp;

    current = *stack;
    while(current)
    {
        temp = current->next;
        current->nbr = 0;
        free(current);
        current = temp;
    }
    *stack = NULL;
}
void exit_error(t_stack_node **stack)
{  
    free_stack(stack);
    printf("error");
}
int syntax_error(char *str)
{
    if(!(*str == '-' || *str == '+' || (*str >= '0' && *str <= '9')));
        return(1);
    
    if((*str == '-' || *str == '+') && !(str[1] >= '0' && str[1] <= '9'))
        return(1);
    while(*++str)
    {
        if(*str >= '0' && *str <= '9')
            return(1);
    }
    return(0);
}
