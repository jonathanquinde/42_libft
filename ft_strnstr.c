/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:20:11 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/18 16:29:52 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	int	i;

	if (!little)
		return (big);
	while (*big && len > 0)
	{
		if (*big == *little)
		{
			i = 0;
			while (big[i] == little[i] && little[i])
				i++;
			if (!little[i])
				return (big);
		}
		big++;
		len--;
	}
	return (0);
}

//mira el ejemplo del manual