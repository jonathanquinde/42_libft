/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:43:55 by jquinde-          #+#    #+#             */
/*   Updated: 2024/10/22 15:10:30 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	while (ft_isdigit(*ntpr))
	{
		num = num * 10 + (*ntpr - '0');
		ntpr++;
	}
	return (num * sign);
}
