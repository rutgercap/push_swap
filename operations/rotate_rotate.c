/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rutgercappendijk <rutgercappendijk@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 10:37:01 by rutgercappe       #+#    #+#             */
/*   Updated: 2021/06/16 17:13:44 by rutgercappe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
**	rotates both stacks
*/

void	rotate_rotate(t_stack **a, t_stack **b)
{
	rotate(a, 0);
	rotate(b, 0);
	write(1, &"rr\n", 3);
}