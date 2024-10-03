/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:19:42 by jquinde-          #+#    #+#             */
/*   Updated: 2024/10/03 18:38:48 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_ch_in_str(const char word, const char *str);

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*initial;
	const char	*last;
	size_t		len;
	char		*buffer;

	if (*s1 == 0)
		return (ft_strdup(""));
	len = ft_strlen(s1);
	initial = s1;
	last = s1 + len - 1;
	while (is_ch_in_str(*initial, set))
		initial++;
	while (is_ch_in_str(*last, set))
		last--;
	if (initial > last)
		return (ft_strdup(""));
	buffer = malloc(last - initial + 2);
	if (buffer == NULL)
		return (NULL);
	ft_strlcpy(buffer, initial, last - initial + 2);
	return (buffer);
}

static int	is_ch_in_str(const char word, const char *str)
{
	while (*str)
	{
		if (*str == word)
			return (1);
		str++;
	}
	return (0);
}
