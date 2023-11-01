#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
        long    nb;

        nb = n;
        if (nb < 0)
        {
                nb *= -1;
                ft_putchar_fd('-', fd);
        }
        if (nb / 10 > 0)
                ft_putnbr_fd(nb / 10, fd);
        ft_putchar_fd(nb % 10 + '0', fd);
}