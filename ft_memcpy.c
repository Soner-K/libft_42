#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
        unsigned char *dest_2;
        unsigned char *src_2;

        dest_2 = dest;
        src_2 = (unsigned char *) src;
        while (n)
        {
                *dest_2 = *src_2;
                dest_2++;
                src_2++;
                n--;
        }
        return (dest);
}