#include "libft.h"

static  int     ft_check(char c, char const *set)
{
        size_t  i;

        i = 0;
        while (set[i])
        {
                if (c == set[i])
                        return (1);
                i++;
        }
        return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
        char    *str;
        size_t          first;
        size_t          last;

        first = ft_check(s1[0], set);
        last = ft_check(s1[ft_strlen(s1) - 1], set);
        str = ft_calloc(ft_strlen(s1) - first - last + 1, sizeof(char));
        if (!str)
                return (NULL);
        if (last + first == 2)
                ft_memcpy(str, s1 + first, ft_strlen(s1) - last - 1);
        else if (last + first == 1)
                ft_memcpy(str, s1 + first, ft_strlen(s1) - last);
        else
                ft_memcpy(str, s1, ft_strlen(s1));
        last = ft_strlen(str);
        str[last] = '\0';
        return (str);
}