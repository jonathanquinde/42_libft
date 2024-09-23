/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:49:11 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/23 19:13:16 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_split(char *s, const char c);
static void		free_arr_of_str(char **arr, size_t i);
static size_t	count_words(char const *s, char c);
static size_t	str_to_arr(char **arr, size_t i, const char *s, char c);

int	main(void)
{
	char	**arr;
	int		i;

	arr = ft_split("hola buenas tardes noches", ' ');
	printf("-----------------------------------------------------\n");
	i = 0;
	while (i <= 4)
	{
		printf("%s %d\n", arr[i], i);
		i++;
	}
	i--;
	i--;
	while (i >= 0)
	{
		printf("%s\n", arr[i]);
		free (arr[i]);
		i--;
	}
	free (arr);
}

char	**ft_split(char *s, const char c)
{
	char	**arr;
	size_t	i;
	size_t	n_words;
	size_t	len;

	n_words = count_words(s, c);
	arr = malloc((n_words + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < n_words)
	{
		while (*s == c)
			s++;
		len = str_to_arr(arr, i, s, c);
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

size_t	str_to_arr(char **arr, size_t i, const char *s, char c)
{
	const char	*s2;
	char		*buffer;
	size_t		len;

	s2 = s;
	while (*s != c && *s)
		s++;
	len = s - s2;
	buffer = malloc((len + 1) * sizeof(char));
	if (buffer == NULL)
		return (0);
	buffer = ft_memcpy(buffer, s2, len);
	buffer[len] = 0;
	arr[i] = buffer;
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
