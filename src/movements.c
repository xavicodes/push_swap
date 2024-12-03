/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xaviermonteiro <xaviermonteiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:23:03 by xaviermonte       #+#    #+#             */
/*   Updated: 2024/11/27 15:13:21 by xaviermonte      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "/Users/xaviermonteiro/Desktop/42/PROJECTS/push_swap/push_swap.h"

//-----------ROTATE
void ra(t_stack_node **stack_a, bool check_print)
{
    if(*stack_a == NULL ||(*stack_a)->next == NULL)
        return;
    t_stack_node *last;
    t_stack_node *first;

    first = *stack_a;
    last = get_last_node(stack_a);

    *stack_a = (*stack_a)->next;
    last->next = first;
    if(check_print == true)
        printf("ra");
}


void rb(t_stack_node **stack_b, bool check_print)
{
    if(*stack_b == NULL || (*stack_b)->next == NULL)
        return;
    t_stack_node *last;
    t_stack_node *first;

    first = *stack_b;
    last = get_last_node(stack_b);

    *stack_b = (*stack_b)->next;
    last->next = first;
        if(check_print == true)
        printf("rb");
}
//-------------REVERSE ROTATE-------------

void rra(t_stack_node **stack_a,bool check_print)
{   
    if((*stack_a) == NULL ||(*stack_a)->next == NULL)
        return;
    t_stack_node *last;
    t_stack_node *second_last;

    second_last = *stack_a;
    while(second_last->next && second_last->next->next)
        second_last = second_last->next;

    last = second_last->next;

    second_last->next = NULL;
    last->next =*stack_a;
    *stack_a = last;
        if(check_print == true)
        printf("rra");

}
void rrb(t_stack_node **stack_b,bool check_print)
{   
    if((*stack_b) == NULL ||(*stack_b)->next == NULL)
        return;
    t_stack_node *last;
    t_stack_node *second_last;

    second_last = *stack_b;
    while(second_last->next && second_last->next->next)
        second_last = second_last->next;

    last = second_last->next;

    second_last->next = NULL;
    last->next =*stack_b;
    *stack_b = last;
    if(check_print == true)
        printf("rrb");
}

//-------------------BOTH AT THE SAME TIME--------------------

void rr(t_stack_node **stack_a, t_stack_node **stack_b)
{
    bool print = false;

    ra(stack_a,print);
    rb(stack_b,print);
    printf("rr");
}
void rrr(t_stack_node **stack_a, t_stack_node **stack_b)
{
    bool print = false;

    rra(stack_a,print);
    rrb(stack_b,print);
    printf("rrr");
}