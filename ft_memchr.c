#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
        size_t  i;
        unsigned char   *s_2;

        i = 0;
        s_2 = (unsigned char *) s;
        while (i < n)
        {
                if (s_2[i] == c)
                        return (&(s_2[i]));
                i++;
        }
        return (NULL);
}