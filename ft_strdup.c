/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:30:35 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/25 14:13:27 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*buffer;

	len = ft_strlen(s);
	buffer = malloc(len + 1);
	if (buffer == NULL)
		return (NULL);
	ft_strlcpy(buffer, s, len + 1);
	return (buffer);
}
