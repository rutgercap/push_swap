/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_converter.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcappend <rcappend@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 13:44:29 by rcappend      #+#    #+#                 */
/*   Updated: 2021/05/27 16:10:40 by rcappend      ########   odam.nl         */
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

static int	check_duplicates(int stacklen, int *stack)
{
	int	half;
	int	i;

	half = stacklen / 2;
	while (stacklen > half)
	{
		i = 0;
		while (i < stacklen)
		{
			if (stack[i] == stack[stacklen])
				return (EXIT_FAILURE);
			i++;
		}	
		stacklen--;
	}
	return (EXIT_SUCCESS);
}

int		*input_converter(int argc, char **argv)
{
	int		*stack;
	int		temp;

	temp = argc - 2;
	stack = ft_calloc(argc, sizeof(int));
	if (!stack)
		exit_error("Malloc failure");
	while (argc > 1)
	{
		argc--;
		if (int_check(argv[argc]))
			exit_error("Only integers allowed");
		if (boundary_check(argv[argc]))
			exit_error("One or more numbers too big or small");
		stack[argc - 1] = ft_atoi(argv[argc]);		
	}
	if (check_duplicates(temp, stack))
		exit_error("Duplicate integer found");
	return (stack);
}
