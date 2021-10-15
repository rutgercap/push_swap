/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rutgercappendijk <rutgercappendijk@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 13:02:06 by rcappend      #+#    #+#                 */
/*   Updated: 2021/10/15 14:33:43 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

/*
**	general
*/
# define INT_MIN -2147483648
# define STACK_A 'a'
# define STACK_B 'b'
# define NOT_SET -1
# define UP 1
# define DOWN 0

/*
**	is_sorted.c
*/
# define HIGHER 1
# define LOWER -1
# define NOT_SORTED -1
# define SORTED 1
# define NEEDS_ROTATING 2

typedef enum e_bool
{
	FALSE,
	TRUE
}	t_bool;

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

/*
** utils
*/

void		*ft_memmove(void *dst, const void *src, size_t len);

long long	ft_big_atoi(const char *str);

int			ft_atoi(const char *str);

int			ft_isdigit(int c);

int			ft_isspace(int c);

void		*ft_calloc(size_t count, size_t size);

void		ft_bzero(void *s, size_t n);

void		*ft_memcpy(void *dst, void *src, size_t n);

size_t		ft_strlen(const char *str);

int			stacklen(t_stack **ref);

int			is_sorted(t_stack **s);

int			get_index(t_stack **ref, int index);

/*
** basic push swap functions
*/

void		input_converter(t_stack **a, int argc, char **argv);

void		set_index(t_stack **s);

void		exit_error(void);

/*
**	operations
*/

void		add_to_front(t_stack **s, int value);

void		swap(t_stack **s, char dir);

void		swap_swap(t_stack **a, t_stack **b);

void		push(t_stack **dest, t_stack **src, char dir);

void		rotate(t_stack **s, char id);

void		rotate_rotate(t_stack **a, t_stack **b);

void		rev_rotate(t_stack **s, char id);

void		rev_rotate_rotate(t_stack **stack_a, t_stack **stack_b);

/*
**	sorting algos
*/

void		mini_sort(t_stack **ref, char id);

void		small_sort(t_stack **stack_a, t_stack **stack_b);

void		big_sort(t_stack **a, t_stack **b);

void		rotate_until_sorted(t_stack **s, char id);

#endif