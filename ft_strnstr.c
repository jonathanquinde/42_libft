/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:20:11 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/28 09:43:22 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_aux;
	int		i;

	if (!*little)
		return ((char *) big);
	while (*big && len > 0)
	{
		if (*big == *little)
		{
			len_aux = len;
			i = 0;
			while (big[i] == little[i] && little[i] && len_aux > 0)
			{
				i++;
				len_aux--;
			}
			if (!little[i])
				return ((char *) big);
		}
		big++;
		len--;
	}
	return (NULL);
}
