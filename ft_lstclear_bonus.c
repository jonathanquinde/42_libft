#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *previous;
    t_list  *current;

    current = *lst;
    while (current != NULL)
    {
        previous = current;
        current = current->next;
        ft_lstdelone(previous, del);
    }
    *lst = NULL;
}