#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
        size_t  i;
        size_t  j;
        char    *str;

        i = 0;
        j = 0;
        while (big[i] && i < len)
        {
                while (big[i + j] == little[j])
                {
                        if (little[j + 1] == '\0')
                        {
                                str = (char *) &big[i];
                                return (str);
                        }
                        j++;
                }
                i++;
                j = 0;
        }
        return (NULL);
}