/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:47:23 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/19 11:02:01 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, t_size_t n)
{
	unsigned char	*buff1;
	unsigned char	*buff2;

	buff1 = s1;
	buff2 = s2;
	while (n > 0)
	{
		if (*buff1 != *buff2 || !buff1 || !buff2)
			return (buff1 - buff2);
		buff1++;
		buff2++;
		n--;
	}
	return (0);
}