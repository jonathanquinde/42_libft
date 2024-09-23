/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:37:50 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/23 14:33:40 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h> 
#include <stdlib.h> 
#include <bsd/string.h>

typedef unsigned int	t_size_t;

size_t		ft_strlen(char *str);
t_size_t	ft_strlcpy(char *dst, const char *src, t_size_t size);
t_size_t	ft_strlcat(char *dst, const char *src, t_size_t size);
void		*ft_memset(void *s, int c, t_size_t n);
void		*ft_memcpy(void *dest, const void *src, t_size_t n);