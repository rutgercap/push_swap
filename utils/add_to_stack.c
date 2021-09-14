/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   add_to_stack.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rutgercappendijk <rutgercappendijk@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/16 14:11:42 by rutgercappe   #+#    #+#                 */
/*   Updated: 2021/09/13 09:50:32 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	add_to_front(t_stack **s, int value)
{
	t_stack	*new;
	
	new = malloc(sizeof(t_stack));
	if (!new)
		exit_error("Malloc failure!");
	new->value = value;
	new->index = NOT_SET;
	new->next = *s;
	*s = new;
}