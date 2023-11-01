#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
        unsigned char   *dest_2;
        unsigned char   *src_2;
        size_t  i;

        i = 0;
        dest_2 =  (unsigned char *) dest;
        src_2 = (unsigned char *) src;
        while (n)
        {
                if (dest_2 <= src_2)
                        dest_2[i] = src_2[i];
                else
                        dest_2[n - 1] = src_2[n - 1];
                i++;
                n--;
        }
        return (dest);
}