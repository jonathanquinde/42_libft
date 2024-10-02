#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list  *previous;
    
    previous = NULL;
    while (lst != NULL)
    {
        previous = lst;
        lst = lst->next;
    } 
    return (previous);
}