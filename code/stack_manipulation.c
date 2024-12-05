/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_manipulation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xaviermonteiro <xaviermonteiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:23:51 by xaviermonte       #+#    #+#             */
/*   Updated: 2024/12/03 14:13:03 by xaviermonte      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack_node *stack_new(int number)
{
        t_stack_node *new_node;

        new_node = malloc(sizeof(t_stack_node));
        if(!new_node)
                return(NULL);
	new_node->nbr = number;
	new_node->index = 0;
	new_node->next = NULL;
        return(new_node);
}
void stack_add_bottom(t_stack_node **stack, t_stack_node *new_node)
{
        t_stack_node *tail;
        if(!new_node)
                return;
        if(!stack)
        {
                *stack = new_node;
                return;
        }
        tail = get_last_node(stack);
        tail->next = new_node;
}
t_stack_node *init_stack(int ac,char **av)
{
        t_stack_node *stack_a;
        int long number;
        int i;

        i = 1;
        while(av[i])
        {
                if(error_syntax(av[i]))
                        free_stack(stack_a);
                number = atoi(av[i]);
                if(number > INT_MAX ||number < INT_MIN)
                        return;
                if(i == 1)
                stack_a = stack_new(number);
                else
                stack_add_bottom(stack_a, stack_new(number));
        i++;
        }
        return(stack_a);
}