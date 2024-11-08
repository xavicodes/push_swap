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