/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mini_sort.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rutgercappendijk <rutgercappendijk@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/09 13:52:41 by rutgercappe   #+#    #+#                 */
/*   Updated: 2021/09/15 15:12:00 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**	sorts stack of three integers
*/

void	mini_sort(t_stack **ref, char id)
{
	if (is_sorted(ref) != NEEDS_ROTATING)
		swap(ref, id);
	rotate_until_sorted(ref, id);
}