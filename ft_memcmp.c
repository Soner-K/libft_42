#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
        unsigned char   *s1_char;
        unsigned char   *s2_char;
        int                     diff;

        s1_char = (unsigned char *) s1;
        s2_char = (unsigned char *) s2;
        diff = 0;
        while (n--)
        {
                diff = *s1_char++ - *s2_char++;
                if (diff != 0)
                        return (diff);
        }
        return (diff);

}