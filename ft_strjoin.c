#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
        size_t size;
        char            *new;

        size = ft_strlen(s1) + ft_strlen(s2);
        new = (char *) ft_calloc(size + 1, sizeof(char));
        if (!new)
                return (NULL);
        ft_memcpy(new, s1, ft_strlen(s1));
        ft_memcpy(new + ft_strlen(s1), s2, ft_strlen(s2));
        new[size] = '\0';
        return (new);
}