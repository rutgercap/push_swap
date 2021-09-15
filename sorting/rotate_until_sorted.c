/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate_until_sorted.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcappend <rcappend@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/13 11:47:58 by rcappend      #+#    #+#                 */
/*   Updated: 2021/09/15 15:16:49 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int		get_dir(t_stack *s)
{
    int		len;
    int		curr;

    len = stacklen(&s);
    curr = 1;
    while (s->index != 1 && curr < (len / 2))
    {
    	curr++;
        s = s->next;
		if (s->index == 1)
			return (DOWN);
    }
	return (UP);
}

void	rotate_until_sorted(t_stack **s, char id)
{
	t_stack *i;
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
