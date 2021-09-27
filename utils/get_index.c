/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_index.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rutgercappendijk <rutgercappendijk@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/17 16:18:10 by rutgercappe   #+#    #+#                 */
/*   Updated: 2021/09/27 11:18:17 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_index(t_stack **ref, int index)
{
	t_stack	*temp;

	temp = *ref;
	while (temp->next && index > 0)
	{
		temp = temp->next;
		index--;
	}
	return (temp->index);
}
