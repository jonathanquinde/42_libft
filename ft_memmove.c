/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:38:00 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/24 19:08:33 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (n == 0 || dest == src)
		return (dest);
	if (dest <= src)
		dest = ft_memcpy(dest, src, n);
	else
	{
		dest = (unsigned char *) dest + (n - 1);
		src = (unsigned char *) src + (n - 1);
		while (n > 0)
		{
			*(unsigned char *) dest = *(unsigned char *) src;
			dest = (unsigned char *) dest - 1;
			src = (unsigned char *) src - 1;
			n--;
		}
		dest = (unsigned char *) dest + 1;
		printf("%s\n", (unsigned char *)dest);
	}
	return (dest);
}

int main(void)
{
	char str[] = "123456";
	char *dest = &str[2];
	char *src = str;
	char *result = ft_memmove(dest, src, 4);
	printf("%s\n", result);
	//121234
}
