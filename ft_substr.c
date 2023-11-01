#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
        char    *new;
        size_t          i;

        new = ft_calloc(len + 1, sizeof(char));
        if (!new)
                return (NULL);
        i = 0;
        while (len--)
        {
                new[i] = (char) s[start];
                i++;
                start++;
        }
        new[i] = '\0';
        return (new);
}