/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rutgercappendijk <rutgercappendijk@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 14:01:27 by rutgercappe       #+#    #+#             */
/*   Updated: 2021/06/17 16:01:41 by rutgercappe      ###   ########.fr       */
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
