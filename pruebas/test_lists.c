#include "libft.h"

void    print_list(t_list *start);
void    *fun(void *buffer);
void    del_fun(void *buffer);
char	*ft_strdup(const char *s);

int test_lists(void)
{
    
    void    (*del)(void *);
    void    *(*f)(void *);
    size_t  i;
    t_list  *start;
    t_list  *new_node;
    char    *letters[4];
    t_list  *clone;

    del = del_fun;
    f = fun;
    letters[0] = "c";
    letters[1] = "b";
    letters[2] = "a";
    letters[3] = 0;

    start = NULL;
    i = 0;
    while (letters[i])
    {
        new_node = ft_lstnew(ft_strdup(letters[i]));
        new_node->next = start;
        start = new_node;
        i++;
    }
    //ft_lsadd_front(&start, ft_lstnew("d"));
    //printf("size: %d\n", ft_lstsize(start));
    print_list(start);
    //printf("last element: %s", (char *) ft_lstlast(start)->content);
    //char *buffer = ft_strdup("d");
    //ft_lstadd_back(&start, ft_lstnew(buffer));
    //ft_lstdelone(ft_lstlast(start), del);
    //ft_lstclear(&start->next, del);
    //ft_lstiter(start, del);
    clone = ft_lstmap(start, f, del);
    print_list(start);
}

void    print_list(t_list *start)
{
    size_t i;

    i = 0;
    while (start != NULL)
    {
        printf("Element: %zu is %s\n", i, (char *) start->content);
        start = start->next;
        i++;
    } 
    printf("\n");
}

void    *fun(void *buffer)
{
    unsigned char *word;

    word = buffer;
    word[0]++;
    return (buffer);
}

void    del_fun(void *buffer)
{
    free(buffer);
}
char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*buffer;

	len = strlen(s);
	buffer = malloc(len + 1);
	if (buffer == NULL)
		return (NULL);
	strlcpy(buffer, s, len + 1);
	return (buffer);
}