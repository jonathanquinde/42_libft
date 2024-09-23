/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:44:55 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/23 14:58:47 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size_t	ft_strlcpy(char *dst, const char *src, t_size_t size)
{
	t_size_t	len;

	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (size > 1)
	{
		*dst = *src;
		dst++;
		src++;
		size--;
	}
	*dst = 0;
	return (len);
}
