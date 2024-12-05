/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritmo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xaviermonteiro <xaviermonteiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:22:55 by xaviermonte       #+#    #+#             */
/*   Updated: 2024/12/03 14:08:52 by xaviermonte      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

bool stack_is_sorted(t_stack_node **stack)
{
        t_stack_node *temp;

        temp = *stack;
        if(!*stack)
                return(1);

        while(temp->next)
        {
                if(temp->nbr > temp->next->nbr)
                        return(false);
        temp = temp->next;
        }
        return(true);
}


void sort_three(t_stack_node **a)
{
        t_stack_node *temp;

        temp = find_biggest_node(a);
        if(*a == temp)
                ra(a,true);
        else if((*a)->next == temp)
                rra(a,true);
        if((*a)->nbr >(*a)->next->nbr )
                sa(a,true);
                

}

void sort_stack(t_stack_node **a, t_stack_node **b)
{

}