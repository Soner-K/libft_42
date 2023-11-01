#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
        unsigned char   *one_b;

        one_b = s;
        while (n)
        {
                *one_b = 0;
                one_b++;
                n--;
        }
}