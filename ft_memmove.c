/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:38:00 by jquinde-          #+#    #+#             */
/*   Updated: 2024/10/04 20:30:33 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest <= src)
		dest = ft_memcpy(dest, src, n);
	else
	{
		dest = (unsigned char *) dest + (n - 1);
		src = (unsigned char *) src + (n - 1);
		while (n > 0)
		{
			*(unsigned char *) dest = *(unsigned char *) src;
			dest = (unsigned char *) dest - 1;
			src = (unsigned char *) src - 1;
			n--;
		}
		dest = (unsigned char *) dest + 1;
	}
	return (dest);
}
