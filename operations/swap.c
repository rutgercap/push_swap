/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rutgercappendijk <rutgercappendijk@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:00:14 by rcappend          #+#    #+#             */
/*   Updated: 2021/06/17 16:02:31 by rutgercappe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**	swap the first 2 elements at the top of stack. 
**	Do nothing if there is only one or no elements.
*/

void	swap(t_stack **s, char dir)
{
	t_stack	*first;
	t_stack	*second;
	
	if (dir)
	{
		write(1, &"s", 1);
		write(1, &dir, 1);
		write(1, &"\n", 1);
	}
	first = *s;
	second = first->next;
	if (first == NULL || first->next == NULL)
		return ;
	first->next = first->next->next;
	second->next = first;
	*s = second;
}