/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcappend <rcappend@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 13:02:06 by rcappend      #+#    #+#                 */
/*   Updated: 2021/05/28 11:51:25 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648
# define STACK_A 'A'
# define STACK_B 'B'
# define FRONT '1'
# define BACK '0'

# include <stdio.h>  // weghalen

/*
** Libft functions
*/

void		*ft_memmove(void *dst, const void *src, size_t len);

long long	ft_big_atoi(const char *str);

int			ft_atoi(const char *str);

int			ft_isdigit(int c);

int			ft_isspace(int c);

void		*ft_calloc(size_t count, size_t size);

void		ft_bzero(void *s, size_t n);

void		*ft_memcpy(void *dst, void *src, size_t n);

size_t		ft_strlen(const char *str);

/*
** push swap functions
*/

void		exit_error(char *msg);

int			*input_converter(int argc, char **argv);

void		swap(int *to_swap, char stack);

int			stack_len(int *stack);

void		push(int *dest, int *src, char stack);



#endif