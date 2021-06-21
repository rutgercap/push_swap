/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rutgercappendijk <rutgercappendijk@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 11:07:21 by rcappend          #+#    #+#             */
/*   Updated: 2021/06/16 16:47:38 by rutgercappe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**	swap first two elements of both stacks.
*/

void	swap_swap(t_stack **a, t_stack **b)
{
	swap(a, 0);
	swap(b, 0);
	write(1, &"ss\n", 3);
}