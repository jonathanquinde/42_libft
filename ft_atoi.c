/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:43:55 by jquinde-          #+#    #+#             */
/*   Updated: 2024/10/03 14:27:06 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_digit(char word);

int	ft_atoi(const char *ntpr)
{
	int	sign;
	int	num;

	num = 0;
	if (ntpr == NULL)
		return (num);
	while (*ntpr == ' ' || (*ntpr >= '\t' && *ntpr <= '\r'))
		ntpr++;
	sign = 1;
	if (*ntpr == '+' || *ntpr == '-')
	{
		if (*ntpr == '-')
			sign = -1;
		ntpr++;
	}
	while (ft_is_digit(*ntpr))
	{
		num = num * 10 + (*ntpr - '0');
		ntpr++;
	}
	return (num * sign);
}

static int	ft_is_digit(char word)
{
	if (word >= '0' && word <= '9')
		return (1);
	return (0);
}
