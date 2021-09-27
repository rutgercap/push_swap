/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rutgercappendijk <rutgercappendijk@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 16:28:03 by rcappend      #+#    #+#                 */
/*   Updated: 2021/09/27 11:20:40 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**	take first element of src and put it on top of dest. 
**	direction = A : Take from B, put on A.
**	direction = B : Take from A, put on B.
*/

void	push(t_stack **dest, t_stack **src, char dir)
{	
	t_stack	*temp;

	write(1, &"p", 1);
	write(1, &dir, 1);
	write(1, &"\n", 1);
	if (src == NULL)
		return ;
	temp = *src;
	if (temp->next)
		*src = temp->next;
	else
		*src = NULL;
	temp->next = *dest;
	*dest = temp;
}
