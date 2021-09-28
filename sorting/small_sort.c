/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   small_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcappend <rcappend@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 13:00:10 by rcappend      #+#    #+#                 */
/*   Updated: 2021/09/27 15:52:45 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_high_index(t_stack **a, t_stack **b)
{
	int		steps;

	while (TRUE)
	{
		steps = 0;
		while (get_index(a, steps) < 4)
			steps++;
		if (get_index(a, 0) > 3)
			push(b, a, STACK_B);
		else if (steps < 2)
			rotate(a, STACK_A);
		else
			rev_rotate(a, STACK_A);
		if (is_sorted(a) != NOT_SORTED)
			break ;
		if (stacklen(a) == 3)
			break ;
	}
}

int	get_loc(t_stack **s)
{
	if (stacklen(s) == 1 && get_index(s, 0) == 4)
		return (5);
	return (1);
}

char	get_dir(t_stack **a, t_stack **b, int *loc)
{
	int	steps;

	*loc = get_loc(b);
	steps = 0;
	while (get_index(a, steps - 1) != *loc)
		steps++;
	if (get_index(a, 0) == 2 || steps < 2)
		return (DOWN);
	else
		return (UP);
}

void	insert(t_stack **a, t_stack **b)
{
	char	dir;
	int		loc;

	dir = get_dir(a, b, &loc);
	while (TRUE)
	{
		if (get_index(a, 0) == loc)
			break ;
		if (dir == DOWN)
			rev_rotate(a, STACK_A);
		else
			rotate(a, STACK_A);
	}
	while (stacklen(b) > 0)
		push(a, b, STACK_A);
}

void	small_sort(t_stack **a, t_stack **b)
{
	push_high_index(a, b);
	if (stacklen(a) == 3 && is_sorted(a) == NOT_SORTED)
	{
		if (stacklen(b) > 1 && is_sorted(b) == SORTED)
			swap_swap(a, b);
		else
			swap(a, STACK_A);
	}
	if (stacklen(b) > 1 && is_sorted(b) == SORTED)
	{
		if (stacklen(a) == 3 && is_sorted(a) == NOT_SORTED)
			swap_swap(a, b);
		else
			swap(b, STACK_B);
	}
	while (stacklen(b) > 0)
		insert(a, b);
	rotate_until_sorted(a, STACK_A);
}
