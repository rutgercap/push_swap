/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rev_rotate.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rutgercappendijk <rutgercappendijk@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/09 10:38:47 by rutgercappe   #+#    #+#                 */
/*   Updated: 2021/09/13 13:47:30 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**	shift down all elements of stack a by 1. 
**	The last element becomes the first one.
*/

static void	swapping_magic(t_stack **s)
{
	t_stack	*last;
	t_stack	*first;
	t_stack	*temp;

	last = *s;
	first = *s;
	while (last->next->next != NULL)
		last = last->next;
	temp = last->next;
	temp->next = first;
	*s = temp;
	last->next = NULL;
}

void	rev_rotate(t_stack **s, char id)
{
	if (stacklen(s) < 2)
		return ;
	if (id)
	{
		write(1, &"rr", 2);
		write(1, &id, 1);
		write(1, &"\n", 1);
	}
	if (stacklen(s) == 2)
	{
		swap(s, 0);
		return ;
	}
	swapping_magic(s);
}