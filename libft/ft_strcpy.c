/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcappend <rcappend@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 10:18:52 by rcappend      #+#    #+#                 */
/*   Updated: 2021/05/27 11:15:30 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dst && !src)
		return ;
	if (dstsize == 0)
		return ;
	i = 0;
	while (src[i] != '\0' && i < dstsize)
	{
		*dst = src[i];
		dst++;
		i++;
	}
}
