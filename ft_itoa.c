#include "libft.h"

char    *ft_itoa(int n)
{
        int     i;
        long            nb;
        char                    *str;

        i = 1;
        nb = n;
        if (n < 0)
        {
                i++;
                nb *= -1;
        }
        while (n/=10)
                i++;
        str = (char *) ft_calloc(i + 1, sizeof(char));
        if (!str)
                return (NULL);
        str[i--] = '\0';
        while (i >= 0)
        {
                str[i--] = nb % 10 + '0';
                nb /= 10;
        }
        if (str[0] == '0' && str[1])
                str[0] = '-';
        return (str);
}