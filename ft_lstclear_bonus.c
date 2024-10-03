/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:41:58 by jquinde-          #+#    #+#             */
/*   Updated: 2024/10/03 16:44:44 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*previous;
	t_list	*current;

	current = *lst;
	while (current != NULL)
	{
		previous = current;
		current = current->next;
		ft_lstdelone(previous, del);
	}
	*lst = NULL;
}
