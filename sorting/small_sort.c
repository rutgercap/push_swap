/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   small_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rutgercappendijk <rutgercappendijk@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/15 16:52:30 by rutgercappe   #+#    #+#                 */
/*   Updated: 2021/09/15 15:32:02 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	small_sort(t_stack **stack_a, t_stack **stack_b)
{
	if (is_sorted(stack_a) == NEEDS_ROTATING)
		return rotate_until_sorted(stack_a, STACK_A);
	while (stacklen(stack_a) > 3)
		push(stack_b, stack_a, STACK_B);
	
	return;
}