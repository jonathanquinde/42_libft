#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list  *start;
	t_list  *new_node;

	start = NULL;
	while (lst != NULL)
	{
		new_node = ft_lstnew((f)(lst->content));
		ft_lstadd_back(&start, new_node);
		if (new_node == NULL)
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		start = new_node;
		lst = lst->next;
	}
	return (start);
}