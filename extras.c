/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extras.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xaviermonteiro <xaviermonteiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:24:11 by xaviermonte       #+#    #+#             */
/*   Updated: 2024/11/28 17:58:33 by xaviermonte      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"


t_stack_node *get_last_node(t_stack_node **stack)
{
    t_stack_node *temp;
    temp = *stack;
    while(temp->next)
    {
        temp = temp->next;
    }
    return(temp);
}
int isdigit(char c)
{
    if(c >= '0' && c <= '9')
        return (1);
    else
        return(0);
}

int ft_atoi(char *nbr)
{   
    int neg;
    int i;
    long int result;

    neg = 1;
    i = 0;

    while(nbr == '+')
    i++;
    while(nbr == '-')
    {
        neg *= -1;
        i++;
    }
    while(isdigit(nbr[i]))
    {
        result = (result *10) + (nbr[i] - '0');
        i++;
    }
    return(neg*result);
}

t_stack_node   **find_biggest_nbr(t_stack_node *stack)
{
    long max;
    t_stack_node *biggest_node;
    if(!stack)
        return(NULL);

    max = LONG_MIN;
    while(stack)
    {
            if(stack->nbr > max)
            {
                max = stack->nbr;
                biggest_node = stack;
            }
            stack = stack->next;
    }
    return(biggest_node);
}