/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:44:00 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/24 15:37:51 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	calculate_digits(int n);
char			*itoa(int n);
static void		ft_putnbr(char *buffer, int n);

int main(void)
{
	char *str;

	str = itoa(-2147483647);
	printf("-----------------------------------------------------------\n%s\n", str);
	free (str);
}

char	*itoa(int n)
{
	size_t	flag;
	size_t	n_digits;
	char	*buffer;

	flag = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n < 0)
	{
		flag = 1;
		n = -n;
	}
	n_digits = calculate_digits(n);
	buffer = malloc(n_digits + flag + 1);
	if (buffer == NULL)
		return (NULL);
	printf("Size: %zu\n", n_digits + flag + 1);
	if (flag)
		*buffer++ = '-';
	ft_putnbr(buffer + (n_digits - 1), n);
	buffer[n_digits] = 0;
	return (buffer - flag);
}

static void	ft_putnbr(char *buffer, int n)
{
	if (n > 9)
		ft_putnbr(buffer - 1, n / 10);
	*buffer = (n % 10) + '0';
	printf("%c\n", *buffer);
}

static size_t	calculate_digits(int n)
{
	size_t	n_digits;

	n_digits = 1;
	while (n > 9)
	{
		n_digits++;
		n /= 10;
	}
	return (n_digits);
}
