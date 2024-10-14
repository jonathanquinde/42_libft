/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:20:01 by jquinde-          #+#    #+#             */
/*   Updated: 2024/10/11 13:02:04 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*buffer;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	buffer = malloc(len + 1);
	if (buffer == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		buffer[i] = (*f)(i, *s);
		s++;
		i++;
	}
	buffer[i] = 0;
	return (buffer);
}
