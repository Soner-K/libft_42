#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int     i;
    char    *res;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
        {
            res = (char *)&s[i];
            return (res);
        }
        i++;
    }
    if (c == 0)
        {
            if (s[i] == '\0')
            {
                res = (char *)&s[i];
            }
        }
    return (NULL);
}