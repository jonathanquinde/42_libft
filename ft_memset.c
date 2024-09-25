/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:12:50 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/25 14:38:20 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	void	*i;

	i = s;
	while (n > 0)
	{
		*(unsigned char *)i = (unsigned char) c;
		i = (unsigned char *)i + 1;
		n--;
	}
	return (s);
}
