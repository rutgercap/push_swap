/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   index.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rutgercappendijk <rutgercappendijk@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/20 10:41:55 by rutgercappe   #+#    #+#                 */
/*   Updated: 2021/09/13 11:11:43 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	save_index(t_stack **s, int dest, int to_set)
{
	t_stack	*i;

	i = *s;
	while (dest > 1)
	{
		i = i->next;
		dest--;
	}
	i->index = to_set;
}

static int	get_highest(t_stack **s)
{
	t_stack	*i;
	int		highest;
	int		index;
	int		current;

	i = *s;
	highest = NOT_SET;
	index = 1;
	current = 1;
	while (i != NULL)
	{
		if (i->index == NOT_SET && i->value > highest)
		{
			highest = i->value;
			index = current;
		}
		i = i->next;
		current++;
	}
	return index;
}

void	set_index(t_stack **s)
{
	t_stack *i;
	int		index;
	int		len;

	i = *s;
	len = stacklen(s);
	while (len > 0)
	{
		index = get_highest(s);
		save_index(s, index, len);
		len--;
	}
}