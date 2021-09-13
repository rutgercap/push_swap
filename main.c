/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rutgercappendijk <rutgercappendijk@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 13:04:18 by rcappend          #+#    #+#             */
/*   Updated: 2021/09/12 12:16:54 by rutgercappe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// for testing
void	print_stack(t_stack *stack, char x)
{
	t_stack	*index;

	printf("%c: ", x);
	index = stack;
	while (index != NULL)
	{
		printf("%i ", index->value);
		index = index->next;
	}
	printf("\n");
}

void	test(t_stack *a, t_stack *b)
{
	printf("\n");
	print_stack(a, STACK_A);
	printf("\n----------\n");
	rotate(&a, STACK_A);
	print_stack(a, STACK_A);
	print_stack(b, STACK_B);
}

// Real code

void	exit_error(char *msg)
{
	write(2, &"Error\n", 6);
	write(2, msg, ft_strlen(msg));
	write(2, &"\n", 1);
	exit(1);
}

void	sort(t_stack **a, t_stack **b)
{
	int	len;

	if (is_sorted(a))
		return ;
	len = stacklen(a);
	if (len == 2)
		swap(a, STACK_A);
	else if (len == 3)
		mini_sort(a, STACK_A);
	// else if (len == 5)
	// 	small_sort(a, b);
	// else if (len == 100)
	// 	big_sort(stack_a, stack_b);
	// else if (len == 500)
	// 	bigger_sort(stack_a, stack_b);
}

int main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc == 1)
		exit_error("Usage: ./push_swap <integer list>");
	a = NULL;
	b = NULL;
	input_converter(&a, argc, argv);
	sort(&a, &b);
	print_stack(a, STACK_A);
	print_stack(b, STACK_B);
	return (EXIT_SUCCESS);
} 