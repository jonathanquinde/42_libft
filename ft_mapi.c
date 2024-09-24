/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:20:01 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/24 18:06:10 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//f devuelve un char, recibe int{index} y char
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	fun(unsigned int i, char ch);

int main(void)
{
	char	*str;
	char	(*f)(unsigned int, char);

	f = fun;
	str = ft_strmapi("abcdefg", f);
	printf("%s", str);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*buffer;

	len = ft_strlen(s);
	buffer = malloc(len + 1);
	if (buffer == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		buffer[i] = (*f)(i, *s);
		printf("i: %zu, ch: %c\n", i, buffer[i]);
		s++;
		i++;
	}
	buffer[i] = 0;
	return (buffer);
}

char	fun(unsigned int i, char ch)
{
	if (i % 2 == 0)
		return (ch - 32);
	else
		return (ch);
}
