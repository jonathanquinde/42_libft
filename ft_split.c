/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:49:11 by jquinde-          #+#    #+#             */
/*   Updated: 2024/10/03 14:22:39 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_split(char *s, const char c);
static void		free_arr_of_str(char **arr, size_t i);
static size_t	count_words(char const *s, char c);
static size_t	str_to_arr(char **arr_element, const char *s, char c);

char	**ft_split(char *s, const char c)
{
	char	**arr;
	size_t	i;
	size_t	n_words;
	size_t	len;

	if (s == NULL)
		return (NULL);
	n_words = count_words(s, c);
	arr = malloc((n_words + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < n_words)
	{
		len = str_to_arr(&arr[i], s, c);
		if (len == 0)
		{
			free_arr_of_str(arr, i);
			return (NULL);
		}
		s += len;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

static void	free_arr_of_str(char **arr, size_t i)
{
	size_t	index;

	index = 0;
	while (index < i)
	{
		free(arr[index]);
		index++;
	}
	free(arr);
}

static size_t	str_to_arr(char **arr_element, const char *s, char c)
{
	const char	*start_word;
	char		*buffer;
	size_t		len;

	while (*s == c)
		s++;
	start_word = s;
	while (*s != c && *s)
		s++;
	len = s - start_word;
	buffer = malloc(len + 1);
	if (buffer == NULL)
		return (0);
	buffer = ft_memcpy(buffer, start_word, len);
	buffer[len] = 0;
	*arr_element = buffer;
	return (len);
}

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c && (s[1] == c || !s[1]))
			count++;
		s++;
	}
	return (count);
}
