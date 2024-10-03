/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:03:13 by jquinde-          #+#    #+#             */
/*   Updated: 2024/10/03 16:49:13 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*buffer;
	size_t			buffer_size;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > 4294967295 / size)
		return (NULL);
	buffer_size = nmemb * size;
	buffer = malloc(buffer_size);
	if (buffer == NULL)
		return (NULL);
	buffer = ft_memset(buffer, 0, buffer_size);
	return (buffer);
}
