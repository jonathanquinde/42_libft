#include "libft.h"
#include <stdio.h>

void    check(char *result, char *expected);

void    test_substr(void)
{
    char test[] = "0123";
    char    *result;

    result = ft_substr(test, 0, 4);
    check(result, "0123");
}

void    check(char *result, char *expected)
{
    if (result != expected)
        printf("Error: %s")
}
