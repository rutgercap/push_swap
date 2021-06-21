/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rutgercappendijk <rutgercappendijk@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 13:52:41 by rutgercappe       #+#    #+#             */
/*   Updated: 2021/06/17 16:34:52 by rutgercappe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**	sorts stack of three integers
*/

void	mini_sort(t_stack **ref, char id)
{
	if (is_sorted(ref))
		return ;
	if (get_value(ref, 0) < get_value(ref, 1))
	{
		if (get_value(ref, 2) > get_value(ref, 0))
		{
			swap(ref, id);
			rotate(ref, id);
		}
		else
			rev_rotate(ref, id);
	}
	else if (get_value(ref, 1) > get_value(ref, 2))
	{
		swap(ref, id);
		rev_rotate(ref, id);
	}
	else if (get_value(ref, 0) > get_value(ref, 2))
		rotate(ref, id);
	else
		swap(ref, id);
}
