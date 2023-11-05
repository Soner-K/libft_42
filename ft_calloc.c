#include "libft.h"
#include <stdio.h>

void    *ft_calloc(size_t nmemb, size_t size)
{
        if ((nmemb * size) <= 0)
                return (NULL);
        void    *ptr;

        ptr = malloc(nmemb * size);
        if (!ptr)
                return (NULL);
        ft_bzero(ptr, nmemb * size);
        return (ptr);
}