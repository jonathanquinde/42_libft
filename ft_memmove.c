/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:38:00 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/19 10:39:16 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memcpy(void *dest, const void *src, t_size_t n)
{
	void	*i;

	i = dest;
	while (n > 0)
	{
		*(unsigned char *) i = *(unsigned char *) src;
		i = (unsigned char *) i + 1;
		src = (unsigned char *) src + 1;
		n--;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, t_size_t n)
{
	unsigned char	*bytes;
	unsigned char	*f_bytes;
	t_size_t		n_clone;

	bytes = malloc(n);
	f_bytes = bytes;
	n_clone = n;

	while (n > 0)
	{
		*bytes = *(unsigned char *) src;
		src = (unsigned char *)src + 1;
		bytes++;
		n--;
	}
	return (ft_memcpy(dest, f_bytes, n_clone));
}
