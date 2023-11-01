#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
        unsigned int            i;
        char    *str;
        char    *bis;

        i = 0;
        str = (char *) ft_calloc(ft_strlen(s) + 1, sizeof(char));
        if (!str)
                return (NULL);
        bis = (char *) s;
        while (bis[i])
        {
                str[i] =f(i, bis[i]);
                i++;
        }
        str[i] = '\0';
        return (str);
}