/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stacklen.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rutgercappendijk <rutgercappendijk@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/16 16:16:37 by rutgercappe   #+#    #+#                 */
/*   Updated: 2021/09/27 11:17:48 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	stacklen(t_stack **ref)
{
	t_stack	*index;
	int		i;

	index = *ref;
	if (index == NULL)
		return (0);
	i = 1;
	while (index->next != NULL)
	{
		i++;
		index = index->next;
	}
	return (i);
}
