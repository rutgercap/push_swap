/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   big_sort.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcappend <rcappend@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/27 08:48:00 by rcappend      #+#    #+#                 */
/*   Updated: 2021/09/27 11:19:51 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	push_bits(t_stack **a, t_stack **b, \
						const int curr_bit, const int len)
{
	int	i;
	int	num;

	i = 0;
	while (TRUE)
	{
		i++;
		num = get_index(a, 0);
		if (((num >> curr_bit) & 1) == 1)
			rotate(a, STACK_A);
		else
			push(b, a, STACK_B);
		if (i == len)
			break ;
	}
}

static void	push_back(t_stack **a, t_stack **b)
{
	int	len;

	len = stacklen(b);
	while (len > 0)
	{
		push(a, b, STACK_A);
		len--;
	}
}

static void	radix_sort(t_stack **a, t_stack **b, int max_bits, const int len)
{
	int	i;

	i = 0;
	while (i < max_bits)
	{
		push_bits(a, b, i, len);
		push_back(a, b);
		i++;
	}
}

static int	get_max_bits(int biggest)
{
	int	max_bits;

	max_bits = 0;
	while (TRUE)
	{
		max_bits++;
		if (biggest >> max_bits == 0)
			break ;
	}
	return (max_bits);
}

void	big_sort(t_stack **a, t_stack **b)
{
	int		len;
	int		max_bits;

	len = stacklen(a);
	max_bits = get_max_bits(len);
	radix_sort(a, b, max_bits, len);
}
