/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rutgercappendijk <rutgercappendijk@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/07 12:54:35 by rutgercappe   #+#    #+#                 */
/*   Updated: 2021/09/27 11:20:59 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**	shift up all elements of stack a by 1. 
**	The first element becomes the last one.
*/

void	rotate(t_stack **s, char id)
{
	t_stack	*last;
	t_stack	*first;

	if (id)
	{
		write(1, &"r", 1);
		write(1, &id, 1);
		write(1, &"\n", 1);
	}
	if (!*s)
		return ;
	last = *s;
	first = *s;
	*s = first->next;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->next = NULL;
}
