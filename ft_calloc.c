/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:03:13 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/19 13:30:21 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(t_size_t nmemb, t_size_t size)
{
	unsigned char	*buffer;
	t_size_t		buffer_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb > 4294967295 / size)
		return (NULL);
	buffer_size = nmemb * size;
	buffer = malloc(buffer_size);
	if (buffer == NULL)
		return (NULL);
	while (buffer_size > 0)
	{
		*buffer = 0;
		buffer++;
		buffer_size--;
	}
	return (buffer);
}
