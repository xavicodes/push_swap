/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritmo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xaviermonteiro <xaviermonteiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:22:55 by xaviermonte       #+#    #+#             */
/*   Updated: 2024/12/03 13:02:07 by xaviermonte      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "/Users/xaviermonteiro/Desktop/42/PROJECTS/push_swap/push_swap.h"



int stack_is_sorted(t_stack_node **stack)
{
        t_stack_node *temp;

        temp = *stack;
        if(!*stack)
                return(0);

        while(temp->next)
        {
                if(temp->nbr > temp->next->nbr)
                        return(0);
        temp = temp->next;
        }
        return(1);
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

sort_stack(&a, &b);