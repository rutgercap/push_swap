/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcappend <rcappend@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 13:04:18 by rcappend      #+#    #+#                 */
/*   Updated: 2021/05/28 12:06:07 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_error(char *msg)
{
	write(1, &"Error\n", 6);
	write(1, msg, ft_strlen(msg));
	write(1, &"\n", 1);
	exit(1);
}

void	print_stack(int *stack, char x)
{
	int	len;

	len = 0;
	while (stack[len])
		len++;
	printf("%c: ", x);
	for (int i = 0; i < len; i++)
		printf("%i ", stack[i]);
}

// PUSH A:
// 	push(stack_b, stack_a, STACK_B);
// PUSH B:
// 	push(stack_a, stack_b, STACK_A);

void	test(int *stack_a, int *stack_b)
{
	printf("\n");
	print_stack(stack_a, STACK_A);
	printf("\n----------\n");
	push(stack_b, stack_a, STACK_B);
	push(stack_b, stack_a, STACK_B);
	push(stack_b, stack_a, STACK_B);
	swap(stack_b, STACK_B);
	print_stack(stack_a, STACK_A);
	printf("\n");
	print_stack(stack_b, STACK_B);
	printf("\n");
}

int main(int argc, char **argv)
{
	int		*stack_a;
	int		*stack_b;
	
	if (argc == 1)
		exit_error("Usage: ./push_swap <integer list>");
	stack_a = input_converter(argc, argv);
	stack_b = ft_calloc(argc, sizeof(int));
	if (!stack_b)
		exit_error("Malloc error");
	test(stack_a, stack_b);
	free(stack_a);
	free(stack_b);
	return (EXIT_SUCCESS);
}