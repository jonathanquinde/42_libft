/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:41:45 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/19 17:23:09 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, t_size_t len)
{
	char	*buff;
	char	*start_buffer;

	buff = malloc(len);
	if (buff == NULL)
		return (NULL);
	start_buffer = buff;
	while (len > 1)
	{
		*buff = s[start];
		buff++;
		start++;
	}
	*buff = 0;
	return (start_buffer);
}