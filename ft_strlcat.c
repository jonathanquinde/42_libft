/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:25:21 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/18 14:39:05 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size_t	ft_strlcat(char *dst, const char *src, t_size_t size)
{
	t_size_t	len_src;
	t_size_t	len_dst;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);

	if (size <= dst)
		return (size);
	while (*dst && size > 1)
	{
		dst++;
		size--;
	}
	while (*src && size > 1)
	{
		*dst = *src;
		dst++;
		src++;
		size--;
	}
	*dst = 0;
	return (len_dst + len_src);
}

static t_size_t	ft_strlen(char *str)
{
	char	*start;

	start = str;
	while (*str)
		str++;
	return (str - start);
}
