#include "../push_swap.h"

void set_index(t_stack_node *stack)
{
    int i;
    long medium;

    i = 0;
    medium = stack_len(&stack)/2;
    while(stack)
    {
        stack->index = i;
        if(i <= medium)
            stack->above_medium = false;
        else if(i > medium)
            stack->above_medium = true;
    i++;
    stack = stack->next;
    }
}

void find_cheapest(t_stack_node *stack)
{
    long cheapest_nbr;
    t_stack_node *temp;

    if(!stack)
        return;
    temp = stack;

    cheapest_nbr = temp->nbr;
    while(temp)
    {
        if(temp->nbr < cheapest_nbr)
        {
            cheapest_nbr = temp->nbr;
        }
    temp = temp->next;
    }
    while(stack)
    {   
        if(cheapest_nbr != stack->nbr)
            stack->cheapest = false;
        else if(cheapest_nbr == stack->nbr)
            stack->cheapest = true;
    stack = stack->next;
    }
}