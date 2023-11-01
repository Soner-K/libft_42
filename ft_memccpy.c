#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
        size_t  i;
        const unsigned char     *src_2;
        unsigned char   *dest_2;

        i = 0;
        src_2 = src;
        dest_2 = dest;
        while (i < n)
        {
                dest_2[i] = src_2[i];
                if (src_2[i] == c)
                        return (dest);
                i++;
        }
        return (NULL);
}