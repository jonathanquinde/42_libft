/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:24:33 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/19 17:48:29 by jquinde-         ###   ########.fr       */
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

static char	*ft_strcat(char *dest, char *src)
{
	char	*initial;

	initial = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (initial);
}

char	*ft_strjoin(char const *s1, char *const *s2)
{
	char		*buffer;
	t_size_t	len_s1;
	t_size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	buffer = malloc(len_s1 + len_s2 + 1);
	if (buffer == NULL)
		return (NULL);
	buffer = ft_strcpy(buffer, s1);
	buffer = ft_strcat(buffer, s2);
	return (buffer);
}