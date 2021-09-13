/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rutgercappendijk <rutgercappendijk@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 14:01:27 by rutgercappe       #+#    #+#             */
/*   Updated: 2021/09/12 13:08:41 by rutgercappe      ###   ########.fr       */
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

t_stack	*find_first(t_stack **s, int *index)
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
	i = find_first(s, curr);
	len = stacklen(s);
	
}