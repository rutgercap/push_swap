/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_converter.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rutgercappendijk <rutgercappendijk@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 13:44:29 by rcappend      #+#    #+#                 */
/*   Updated: 2021/10/05 16:54:32 by rcappend      ########   odam.nl         */
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

static int	boundary_check(int n, char *value)
{
	if (*value == '-')
	{
		if (ft_strlen(value) > 11)
			return (EXIT_FAILURE);
		if (n > 0)
			return (EXIT_FAILURE);
	}
	else
	{
		if (ft_strlen(value) > 10)
			return (EXIT_FAILURE);
		if (n < 0)
			return (EXIT_FAILURE);
	}
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
	int	temp;

	while (argc > 1)
	{
		argc--;
		if (int_check(argv[argc]))
			exit_error();
		temp = ft_atoi(argv[argc]);
		if (boundary_check(temp, argv[argc]))
			exit_error();
		add_to_front(a, temp);
	}
	check_duplicates(*a);
}
