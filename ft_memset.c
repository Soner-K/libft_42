#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
        unsigned char   *one_b;
        size_t  i;

        one_b = (unsigned char *)s;
        i = 0;
        while (i < n)
        {
                one_b[i] = (unsigned char) c;
                i++;
        }
        return (s);
}