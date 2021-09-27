/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_converter.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rutgercappendijk <rutgercappendijk@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 13:44:29 by rcappend      #+#    #+#                 */
/*   Updated: 2021/09/27 11:03:02 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	int_check(char *value)
{
	if (*value == '-')
		value++;
	if (!*value)
		return (EXIT_FAILURE);
	while (*value)
	{
		if (!ft_isdigit(*value))
			return (EXIT_FAILURE);
		value++;
	}
	return (EXIT_SUCCESS);
}

static int	boundary_check(char *value)
{
	long long	temp;

	temp = ft_big_atoi(value);
	if (temp < INT_MIN || temp > INT_MAX)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

static void	check_duplicates(t_stack *start)
{
	t_stack	*index;
	t_stack	*check;

	index = start;
	while (index != NULL && index->next != NULL)
	{
		check = index;
		while (check->next != NULL)
		{
			if (index->value == check->next->value)
				exit_error();
			check = check->next;
		}
		index = index->next;
	}
}

void	input_converter(t_stack **a, int argc, char **argv)
{
	int		temp;

	temp = argc - 2;
	while (argc > 1)
	{
		argc--;
		if (int_check(argv[argc]))
			exit_error();
		if (boundary_check(argv[argc]))
			exit_error();
		add_to_front(a, ft_atoi(argv[argc]));
	}
	check_duplicates(*a);
}
