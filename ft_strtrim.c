/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:19:42 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/24 17:18:45 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_ch_in_str(const char word, const char *str);
char	*ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	char	*buffer;

	buffer = ft_strtrim("wxwxwxwwxwxwxw", "xw");
	printf("%s", buffer);
	free(buffer);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*initial;
	const char	*last;
	size_t		len;
	char		*buffer;
	char		*f_buffer;

	len = ft_strlen(s1);
	initial = s1;
	last = s1 + len - 1;
	while (is_ch_in_str(*initial, set))
		initial++;
	while (is_ch_in_str(*last, set))
		last--;
	buffer = malloc(last - initial + 1);
	if (buffer == NULL)
		return (NULL);
	f_buffer = buffer;
	while (initial <= last)
	{
		*buffer = *initial;
		buffer++;
		initial++;
	}
	*buffer = 0;
	return (f_buffer);
}

int	is_ch_in_str(const char word, const char *str)
{
	while (*str)
	{
		if (*str == word)
			return (1);
		str++;
	}
	return (0);
}
