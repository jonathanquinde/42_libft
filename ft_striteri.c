/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:08:43 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/24 18:19:25 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char*));
void	fun(unsigned int i, char *ch);

int main(void)
{
	char	s[] = "abcdefg";
	void	(*f)(unsigned int, char*);

	f = fun;
	ft_striteri(s, f);
	printf("%s", s);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		(*f)(i, s);
		printf("i: %zu, ch: %c\n", i, *s);
		s++;
		i++;
	}
}

void	fun(unsigned int i, char *ch)
{
	if (i % 2 == 0)
		*ch -= 32;
}
