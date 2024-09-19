/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:49:11 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/19 19:37:53 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c);
char			**ft_split(char *s, char c);
char			*w_alloc(char **arr, size_t i, char *s, char c);

int	main(void)
{
	char	**arr;
	int		i;

	i = 0;
	arr = ft_split("hola buenas tardes noches", ' ');
	while (i < 5)
	{
		printf("%d ", i);
		printf("%s\n", arr[i]);
		i++;
	}
}

char	**ft_split(char *s, char c)
{
	char	**arr;
	size_t	n_words;
	size_t	i;

	n_words = count_words(s, c);
	arr = malloc(n_words + 1);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < n_words)
	{
		while (*s == c)
			s++;
		//suma los caraceres que he me movido
		//printf("%s\n", s);
		s = w_alloc(arr, i, s, c);
		i++;
	}
	printf ("Count:%zu, i:%zu\n", n_words, i);
	arr[i] = NULL;
	return (arr);
}

char	*w_alloc(char **arr, size_t i, char *s, char c)
{
	char	*s2;
	char		*buffer;
	char		*start_buffer;
	size_t		len;

	s2 = s;
	len = 0;
	while (*s != c && *s)
	{
		printf("%c\n", *s);
		len++;
		s++;
	}
	//printf("%zu\n", len);
	buffer = malloc(len + 1);
	if (buffer == NULL)
		return (NULL);
	start_buffer = buffer;
	while (*s2 != c && *s2)
	{
		*buffer = *s2;
		buffer++;
		s2++;
	}
	*buffer = 0;
	printf("%s\n", start_buffer);
	arr[i] = start_buffer;
	return (s);
}

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	len;

	count = 0;
	while (*s)
	{
		if (*s != c && (s[1] == c || !s[1]))
			count++;
		s++;
	}
	return (count);
}
