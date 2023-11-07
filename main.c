#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <bsd/string.h>

void    ft_show(unsigned int i, char *tab)
{
    while (tab[i])
    {
        printf("Indice %u = %c\n", i, tab[i]);
        i++;
    }
}

void    ft_modify(unsigned int i, char *tab)
{
    while (tab[i])
    {
        tab[i] = 'S';
        i++;
    }      
}

int main(int ac, char **av)
{
    (void) ac;
    char dst[100] = "salut ca va";
   // size_t size = 50;
    printf("ft_strlen(%s) = %ld\n", av[1], ft_strlen(av[1]));
    printf("ft_isalpha(%c) = %d\n", av[1][0], ft_isalpha(av[1][0]));
    printf("ft_isdigit(%c) = %d\n", av[1][0], ft_isdigit(av[1][0]));
    printf("ft_isalnum(%c) = %d\n", av[1][0], ft_isalnum(av[1][0]));
    printf("ft_isascii(%c) = %d\n", av[1][0], ft_isascii(av[1][0])); 
    printf("ft_isprint(%c) = %d\n", av[1][0], ft_isprint(av[1][0]));
    printf("ft_toupper(%c) = %c\n", av[1][0], ft_toupper(av[1][0]));
    printf("ft_tolower(%c) = %c\n", av[1][0], ft_tolower(av[1][0])); 

/*
    printf("ft_strncmp(%s, %s, %s) = %d\n", av[1], av[2], av[3], ft_strncmp(av[1], av[2], atoi(av[3])));
    printf("ft_strlcpy(%s, %s, %zu) = %ld\n Copy = %s\n", dst, av[2], size, ft_strlcpy(dst, av[2], size), dst);
    printf("strlcpy(%s, %s, %zu) = %ld\n Copy = %s\n", dst, av[2], size, strlcpy(dst, av[2], size), dst);
    printf("ft_strlcat(%s, %s, %ld) = %ld\n Cat = %s\n", dst, av[2], size, ft_strlcat(dst, av[2], size), dst);
    printf("strlcat(%s, %s, %ld) = %ld\n Cat = %s\n", dst, av[2], size, strlcat(dst, av[2], size), dst);
*/
    printf("ft_striteri(%s, (*f)(unsigned int, char *)) = \n", dst);
    ft_striteri(dst, ft_show);
    ft_striteri(dst, ft_modify);
    ft_striteri(dst, ft_show);


}