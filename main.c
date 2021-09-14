/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rutgercappendijk <rutgercappendijk@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 13:04:18 by rcappend      #+#    #+#                 */
/*   Updated: 2021/09/14 13:32:38 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// for testing
void	print_stack(t_stack *stack, char x)
{
	t_stack	*i;

	printf("%c: \n", x);
	i = stack;
	while (i != NULL)
	{
		printf("val: %i | index: %i \n", i->value, i->index);
		i = i->next;
	}
	printf("\n");
}

// void	test(t_stack **a, t_stack **b)
// {
// 	swap(a, STACK_A);
// }

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

	if (is_sorted(a) == SORTED)
		return ;
	len = stacklen(a);
	if (len == 2)
		swap(a, STACK_A);
	else if (len == 3)
		mini_sort(a, STACK_A);
	else if (len == 5)	// add 4 ?
		small_sort(a, b);
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
	set_index(&a);
	sort(&a, &b);
	print_stack(a, STACK_A);
	print_stack(b, STACK_B);
	return (EXIT_SUCCESS);
} 