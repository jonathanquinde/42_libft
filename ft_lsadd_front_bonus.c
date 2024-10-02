#include "libft.h"

void    ft_lsadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}