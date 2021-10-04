/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rutgercappendijk <rutgercappendijk@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 13:04:18 by rcappend      #+#    #+#                 */
/*   Updated: 2021/10/04 14:37:22 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_error(void)
{
	write(2, &"Error\n", 6);
	exit(1);
}

void	sort(t_stack **a, t_stack **b)
{
	int	len;

	if (is_sorted(a) == SORTED)
		return ;
	if (is_sorted(a) == NEEDS_ROTATING)
		return (rotate_until_sorted(a, STACK_A));
	len = stacklen(a);
	if (len == 2)
		swap(a, STACK_A);
	else if (len == 3)
		mini_sort(a, STACK_A);
	else if (len == 4 || len == 5)
		small_sort(a, b);
	else
		big_sort(a, b);
}

void	print_stack(t_stack **s)
{
	int	len;
	int	i;

	i = 0;
	len = stacklen(s);
	while (i < len)
	{
		printf("%i\n", get_index(s, i));
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc == 1)
		exit_error();
	a = NULL;
	b = NULL;
	input_converter(&a, argc, argv);
	set_index(&a);
	sort(&a, &b);
	return (EXIT_SUCCESS);
}
