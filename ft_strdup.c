#include "libft.h"

char    *ft_strdup(const char *s)
{
        char    *ptr;

        ptr = malloc(sizeof(char) * ft_strlen(s) + 1);
        if (!ptr)
                return (NULL);
        ft_memcpy(ptr, s, ft_strlen(s) + 1);
        return (ptr);
}