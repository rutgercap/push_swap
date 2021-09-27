/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate_until_sorted.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcappend <rcappend@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/13 11:47:58 by rcappend      #+#    #+#                 */
/*   Updated: 2021/09/27 08:15:21 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	get_dir(t_stack *s)
{
	int	len;
	int	steps;

	len = stacklen(&s);
	if (len % 2 == 1)
		len++;
	steps = 0;
	while (s->index != 1 && steps < (len / 2))
	{
		steps++;
		s = s->next;
		if (s->index == 1)
			return (DOWN);
	}
	return (UP);
}

void	rotate_until_sorted(t_stack **s, char id)
{
	t_stack	*i;
	int		dir;

	i = *s;
	if (is_sorted(s) == SORTED)
		return ;
	dir = get_dir(*s);
	while (i->index != 1)
	{
		if (dir == UP)
			rotate(&i, id);
		if (dir == DOWN)
			rev_rotate(&i, id);
	}
	*s = i;
}
