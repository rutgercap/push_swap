/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcappend <rcappend@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 16:00:14 by rcappend      #+#    #+#                 */
/*   Updated: 2021/05/28 11:07:16 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(int *to_swap, char stack)
{
	int	temp;

	if (to_swap[1])
	{
		temp = to_swap[0];
		to_swap[0] = to_swap[1];
		to_swap[1] = temp;
	}		
	if (stack)
	{
		write(1, &"S", 1);
		write(1, &stack, 1);
		write(1, &"\n", 1);
	}
}
