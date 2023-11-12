

#include "libft.h"

int main(int ac, char **av)
{
    if (av[ac - 1] == "isa" || "tolower" || "toupper")
    {
        printf("ft_isalpha(%c) = %d\n", av[1][0], ft_isalpha(av[1][0]));
        printf("ft_isdigit(%c) = %d\n", av[1][0], ft_isdigit(av[1][0]));
        printf("ft_isalnum(%c) = %d\n", av[1][0], ft_isalnum(av[1][0]));
        printf("ft_isascii(%c) = %d\n", av[1][0], ft_isasci(av[1][0]));
        printf("ft_isprint(%c) = %d\n", av[1][0], ft_isprint(av[1][0]));
        printf("ft_toupper(%c) = %d\n", av[1][0], ft_isalnum(av[1][0]));
        printf("ft_toupper(%c) = %c\n", av[1][0], ft_toupper(av[1][0]));
        printf("ft_tolower(%c) = %c\n", av[1][0], ft_tolower(av[1][0]));
    }
    if (av[ac - 1] == "mem") // problème avec atoi surement (conversion en int, pas en size_t)
    {
        printf("ft_memset(%s, %d, %zu) = %s\n", av[1], ft_atoi(av[2]), ft_atoi(av[3]), (char *) ft_memset(av[1], ft_atoi(av[2]), ft_atoi(av[3])));
        printf("ft_memcpy(%s, %s, %zu) = %s\n", av[1], av[2], ft_atoi(av[3]), (char *) ft_memcpy(av[1], av[2], ft_atoi(av[3])));
        printf("ft_memmove(%s, %s, %zu) = %s\n", av[1], av[2], ft_atoi(av[3]), (char *) ft_memmove(av[1], av[2], ft_atoi(av[3])));
        printf("ft_memchr(%s, %d, %zu) = %s\n", av[1], ft_atoi(av[2]), ft_atoi(av[3]), (char *) ft_memchr(av[1], av[2], ft_atoi(av[3])));
        printf("ft_memcmp(%s, %s, %zu) = %d\n", av[1], av[2], ft_atoi(av[3]), ft_memcmp(av[1], av[2], ft_atoi(av[3])));
    }
    if (av[ac - 1] == "str1")
    {
        printf("ft_strncmp(%s, %s, %zu) = %d\n", av[1], av[2], ft_atoi(av[3]), ft_strncmp(av[1], av[2], atoi(av[3])));
        printf("ft_strchr(%s, %d) = %s\n", av[1], ft_atoi(av[2]), ft_strchr(av[1], ft_atoi(av[2])));
        printf("ft_strrchr(%s, %d) = %s\n", av[1], ft_atoi(av[2]), ft_strrchr(av[1], ft_atoi(av[2])));
        printf("ft_strnstr(%s, %s, %zu) = %s\n", av[1], av[2], ft_atoi(av[3]), ft_strnstr(av[1], av[2], ft_atoi(av[3])));
    }
    if (av[ac - 1] == "strlen")
    {
        printf("ft_strlen(%s) = %zu\n", av[1], ft_strlen(av[1]));
    }
    if (av[ac - 1] == "atoi")
    {
        printf("ft_atoi(%s) = %d\n", av[1], ft_atoi(av[1]));
    }
    if (av[ac - 1] == "strlcpy" || "strlcat")
    {
        char    *dst;
        dst = ft_strdup(av[1]);
        printf("ft_strlcpy(%s, %s, %d) = %ld\n Copy = %s\n", dst, av[2], ft_atoi(av[3]), ft_strlcpy(dst, av[2], ft_atoi(av[3])), dst);
        printf("strlcpy(%s, %s, %d) = %ld\n Copy = %s\n", dst, av[2], ft_atoi(av[3]), strlcpy(dst, av[2], ft_atoi(av[3])), dst);
        dst = ft_strdup(av[1]);
        printf("/_\\ dst = %s\n", dst);
        printf("ft_strlcat(%s, %s, %ld) = %ld\n Cat = %s\n", dst, av[2], ft_atoi(av[3]), ft_strlcat(dst, av[2], ft_atoi(av[3])), dst);
        printf("strlcat(%s, %s, %ld) = %ld\n Cat = %s\n", dst, av[2], ft_atoi(av[3]), strlcat(dst, av[2], ft_atoi(av[3])), dst);

    }
    if (av[ac - 1] == "strdup")
    {
        printf("ft_strdup(%s) = %s\n", av[1], ft_strdup(av[1]));
    }
    if (av[ac - 1] == "bzero")
    {
        char *test;
        test = ft_strdup(av[1]);
        printf("ft_bzero(%s, %zu\n) = %s\n", av[1], ft_atoi(av[2]), test);
    }
    // if (av[ac - 1] == "calloc")
    // {
    //     printf("ft_calloc(%s, %s) = %zu\n", av[1], av[2], (size_t) ft_calloc(ft_atoi(av[1]), ft_atoi(av[2])));
    // }
    if (av[ac - 1] == "substr")
    {
        printf("ft_substr(%s, %zu, %zu) = %s\n", av[1], ft_atoi(av[2]), ft_atoi(av[3]), ft_substr(av[1], ft_atoi(av[2]), ft_atoi(av[3])));
    }
    if (av[ac - 1] == "strjoin")
    {
        printf("ft_strjoin(%s, %s) = %s\n", av[1], av[2], ft_strjoin(av[1], av[2]));
    }
    if (av[ac - 1] == "strtrim")
    {
        printf("ft_strtrim(%s, %s) = %s\n", av[1], av[2], ft_strtrim(av[1], av[2]));
    }
    if (av[ac - 1] == "itoa")
    {
        printf("ft_itoa(%s) = %s\n", av[1], ft_itoa(ft_atoi(av[1])));
    }
    if (av[ac - 1] == "put")
    {
        printf("ft_putchar_fd(%s, %s) = ", av[1][0], av[3]);
        ft_putchar_fd(av[1][0], ft_atoi(av[3]));
        printf("\n");

        printf("ft_putstr_fd(%s, %s) = ", av[1], av[3]);
        ft_putstr_fd(av[1], ft_atoi(av[3]));

        printf("ft_putendl_fd(%s, %s) = ", av[1], av[3]);
        ft_putendl_fd(av[1], ft_atoi(av[3]));

        printf("ft_putnbr_fd(%s, %s) = ", av[1], av[3]);
        ft_putnbr_fd(ft_atoi(av[2]), ft_atoi(av[3]));
        printf("\n");
    }
}