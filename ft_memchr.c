/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:40:07 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/25 14:35:56 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	void	*i;

	i = (void *) s;
	while (n > 0)
	{
		if (*(unsigned char *)i == (unsigned char) c)
			return (i);
		i = (unsigned char *)i + 1;
		n--;
	}
	return (NULL);
}
