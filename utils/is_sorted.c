/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   is_sorted.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rutgercappendijk <rutgercappendijk@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/09 14:01:27 by rutgercappe   #+#    #+#                 */
/*   Updated: 2021/09/14 14:06:37 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**	checks if stack is sorted
**	returns SORTED if stack is sorted
**	returns NEEDS_ROTATING if stack is sorted, but 
**	doesn't start at index 1
*/

// int	check_start(t_stack **s, int len)
// {
// 	t_stack *i;

// 	i = *s;
// 	while (len >= 2)
// 	{
// 		if (i->value > i->next->value)
// 			return NOT_SORTED;
// 		i = i->next;
// 		len--;
// 	}
// 	return NEEDS_ROTATING;
// }

// t_stack	*get_first(t_stack **s, int *test)
// {
// 	t_stack	*i;

// 	i = *s;
// 	while (i->index != 1)
// 	{
// 		*test += 1;
// 		i = i->next;
// 	}
// 	return i;
// }

// int	is_sorted(t_stack **s)
// {
// 	t_stack	*i;
// 	int		len;
// 	int		curr;

// 	curr = 1;
// 	i = get_first(s, &curr);
// 	len = stacklen(s);
// 	while (i->next != NULL)
// 	{
// 		if (i->value > i->next->value)
// 			return NOT_SORTED;
// 		i = i->next;
// 		len--;
// 	}

// }

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
	return low;
}

int	is_sorted(t_stack **s)
{
	t_stack	*i;
	t_bool	rotate;
	int		low;

	i = *s;
	rotate = FALSE;
	low = get_low(s);
	while (i->next != NULL)
	{
		if (i->next->index == low)
			rotate = TRUE;
		if (i->next->index != low && i->index > i->next->index)
			return NOT_SORTED;
		i = i->next;
	}
	if (rotate == TRUE)
		return NEEDS_ROTATING;
	return SORTED;
}