/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcappend <rcappend@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/28 11:07:21 by rcappend      #+#    #+#                 */
/*   Updated: 2021/05/28 11:09:45 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_swap(int *stack_a, int *stack_b)
{
	swap(stack_a, 0);
	swap(stack_b, 0);
	write(1, &"ss\n", 3);
}