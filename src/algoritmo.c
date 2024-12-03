/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritmo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xaviermonteiro <xaviermonteiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:22:55 by xaviermonte       #+#    #+#             */
/*   Updated: 2024/11/29 11:43:18 by xaviermonte      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "/Users/xaviermonteiro/Desktop/42/PROJECTS/push_swap/push_swap.h"



stack_is_sorted(&a);


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