/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:30:35 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/19 17:47:12 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	char	*inital;

	inital = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
    *dest = 0;
	return (inital);
}

char	*ft_strdup(const char *s)
{
	t_size_t	len;
	char		*buffer;

	len = ft_strlen(s);
	buffer = malloc(len + 1);
	if (buffer == NULL)
		return (NULL);
	buffer = ft_strcpy(buffer, s);
	return (buffer);
}
