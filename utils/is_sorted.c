/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   is_sorted.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rutgercappendijk <rutgercappendijk@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/09 14:01:27 by rutgercappe   #+#    #+#                 */
/*   Updated: 2021/09/27 11:18:07 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**	checks if stack is sorted
**	returns SORTED if stack is sorted
**	returns NEEDS_ROTATING if stack is sorted, but 
**	doesn't start at index 1
*/

static int	get_low(t_stack **s)
{
	t_stack	*i;
	int		low;

	i = *s;
	low = i->index;
	while (i != NULL)
	{
		if (i->index < low)
			low = i->index;
		i = i->next;
	}
	return (low);
}

static int	compare(t_stack *s, int steps)
{
	t_stack	*i;

	i = s;
	while (steps > 0 && i != NULL)
	{
		i = i->next;
		steps--;
	}
	if (i == NULL)
		return (LOWER);
	if (i->index > s->index)
		return (HIGHER);
	return (LOWER);
}

static int	check_sort(t_stack *i, const int low, t_bool *rotate)
{
	while (i->next != NULL)
	{
		if (i->next->index != low)
		{
			if (compare(i, 1) == LOWER)
				return (NOT_SORTED);
		}
		else
		{
			if (compare(i, 2) == HIGHER)
				return (NOT_SORTED);
			else
				*rotate = TRUE;
		}
		i = i->next;
	}
	return (SORTED);
}

static int	last_check(t_stack **s)
{
	int	len;

	len = stacklen(s);
	if (get_index(s, 0) < get_index(s, len))
		return (NOT_SORTED);
	return (NEEDS_ROTATING);
}

int	is_sorted(t_stack **s)
{
	t_bool	rotate;
	int		low;

	rotate = FALSE;
	low = get_low(s);
	if (check_sort(*s, low, &rotate) == NOT_SORTED)
		return (NOT_SORTED);
	if (rotate == TRUE)
		return (last_check(s));
	return (SORTED);
}
