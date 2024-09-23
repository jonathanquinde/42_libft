/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:30:35 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/23 15:15:18 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	t_size_t	len;
	char		*buffer;

	len = ft_strlen(s);
	buffer = malloc(len + 1);
	if (buffer == NULL)
		return (NULL);
	buffer = ft_memcpy(buffer, s, len);
    buffer[len] = 0;
	return (buffer);
}
