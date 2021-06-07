/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcappend <rcappend@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 16:28:03 by rcappend      #+#    #+#                 */
/*   Updated: 2021/05/28 12:01:13 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**	take first element of src and put it on top of dest. 
**	direction = A : Take from B, put on A.
**	direction = B : Take from A, put on B.
*/


void	push(int *dest, int *src, char direction)
{
	int	dest_len;
	int	src_len;

	dest_len = stack_len(dest);
	src_len = stack_len(src);
	if (src[0])
	{
		if (dest_len > 0)
			ft_memmove(dest + 1, dest, sizeof(int) * dest_len);
		dest[0] = src[0];
		ft_memmove(src, src + 1, sizeof(int) * src_len - 1);
		src[src_len - 1] = '\0';
	}
	if (direction)
	{
		write(1, &"P", 1);
		write(1, &direction, 1);
		write(1, &"\n", 1);
	}
}