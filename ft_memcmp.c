/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:47:23 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/28 00:11:17 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*buff1;
	unsigned char	*buff2;

	buff1 = (unsigned char *) s1;
	buff2 = (unsigned char *) s2;
	while (n > 0)
	{
		if (*buff1 != *buff2)
			return (*buff1 - *buff2);
		buff1++;
		buff2++;
		n--;
	}
	return (0);
}
