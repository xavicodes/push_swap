#ifndef PUSH_SWAP.H
#define  PUSH_SWAP.H

#include "../push_swap/libft/libft.h"
#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack_node;

//-------------------ERROR_HANDLEING------------------------
void check_ifnumber(char **argv);








//------------------MOVEMENTS---------------------------
void ra(t_stack_node **stack_a, bool check_print);
void rb(t_stack_node **stack_b, bool check_print);
void rra(t_stack_node **stack_a,bool check_print);
void rrb(t_stack_node **stack_b,bool check_print);
void rr(t_stack_node **stack_a, t_stack_node **stack_b);
void rrr(t_stack_node **stack_a, t_stack_node **stack_b);







//------------------STACK MANIPULATION---------------------
t_stack_node *get_last_node(t_stack_node **stack);
#endif