/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_big_atoi.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rutgercappendijk <rutgercappendijk@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/27 14:31:44 by rcappend      #+#    #+#                 */
/*   Updated: 2021/09/27 11:10:33 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long long	ft_big_atoi(const char *str)
{
	int			i;
	long long	res;
	int			minus;

	i = 0;
	res = 0;
	while (ft_isspace(str[i]))
		i++;
	minus = 1;
	if (str[i] == '-')
		minus = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * minus);
}
