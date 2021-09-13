/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rutgercappendijk <rutgercappendijk@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 14:01:27 by rutgercappe       #+#    #+#             */
/*   Updated: 2021/09/13 08:31:43 by rutgercappe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**	checks if stack is sorted. Returns 0 if sorted, 1 if not.
*/

int	is_sorted(t_stack **s)
{
	t_stack	*index;

	index = *s;
	while (index->next != NULL)
	{
		if (index->value > index->next->value)
			return (NOT_SORTED);
		index = index->next;
	}
	return (SORTED);
}

t_stack	*get_first(t_stack **s, int *index)
{
	t_stack	*i;

	i = *s;
	while (i->index != 1)
	{
		*index++;
		i = i->next;
	}
	return i;
}

int	new_sorted(t_stack **s)
{
	t_stack	*i;
	int		len;
	int		curr;

	curr = 1;
	i = get_first(s, curr);
	len = stacklen(s);
	while (i->next != NULL)
	{
		
	}
}




/*
**	checks if stack is sorted
**	returns SORTED if stack is sorted
**	returns NEEDS_ROTATING if stack is sorted, but 
**	doesn't start at index 1
*/