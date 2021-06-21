/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rutgercappendijk <rutgercappendijk@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 10:43:25 by rutgercappe       #+#    #+#             */
/*   Updated: 2021/06/17 16:23:01 by rutgercappe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**	reverse rotates both stacks
*/

void	rev_rotate_rotate(t_stack **stack_a, t_stack **stack_b)
{
	rev_rotate(stack_a, 0);
	rev_rotate(stack_b, 0);
	write(1, &"rrr\n", 4);
}
