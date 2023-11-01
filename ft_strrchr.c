 #include "libft.h"
 
 char *ft_strrchr(const char *s, int c)
 {
    int     i;
    char    *ptr;

    i = ft_strlen(s) - 1;
    while (i >= 0)
    {
        if (s[i] == c)
        {
            ptr = (char *)&s[i];
            return (ptr);
        }
        i--;
    }
    if (c == 0)
    {
        i = ft_strlen(s);
        ptr = (char *)&s[i];
        return (ptr);
    }
    return (NULL);
 }