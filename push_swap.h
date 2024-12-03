/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xaviermonteiro <xaviermonteiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:24:27 by xaviermonte       #+#    #+#             */
/*   Updated: 2024/12/03 13:13:32 by xaviermonte      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP.H
#define  PUSH_SWAP.H

//#include ".libft/libft.h"
#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>


typedef struct s_stack
{
	int				nbr;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack_node;

//-------------------ERROR_HANDLEING------------------------
void check_ifnumber(char **argv);
void exit_error(t_stack_node **stack);
int syntax_error(char *str);
void free_stack( t_stack_node **stack);







//------------------MOVEMENTS---------------------------
void ra(t_stack_node **stack_a, bool check_print);
void rb(t_stack_node **stack_b, bool check_print);
void rra(t_stack_node **stack_a,bool check_print);
void rrb(t_stack_node **stack_b,bool check_print);
void rr(t_stack_node **stack_a, t_stack_node **stack_b);
void rrr(t_stack_node **stack_a, t_stack_node **stack_b);

//------------------ALGORITMO----------------------------
void sort_three(t_stack_node **a);
int stack_is_sorted(t_stack_node **stack);






//------------------STACK MANIPULATION---------------------

t_stack_node *get_last_node(t_stack_node **stack);
void stack_add_bottom(t_stack_node **stack, t_stack_node *new_node);
t_stack_node   **find_biggest_nbr(t_stack_node *stack);


//------------------STACK CREATION-------------------------
t_stack_node *init_stack(int ac,char **av);
t_stack_node *stack_new(int nbr);

//-------------------EXTRAS---------------------------------
int isdigit(char c);
int ft_atoi(char *nbr);
int stack_len(t_stack_node **stack);

#endif

