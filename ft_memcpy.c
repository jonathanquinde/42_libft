/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:30:25 by jquinde-          #+#    #+#             */
/*   Updated: 2024/10/03 16:44:00 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*i;

	if (dest == NULL && src == NULL)
		return (dest);
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
