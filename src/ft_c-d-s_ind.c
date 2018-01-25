#include "../include/ft_printf.h"

void ft_c_ind(va_list ap)
{
    char c_key;

    c_key = va_arg(ap, char);
    ft_putchar(c_key);
}

void ft_d_ind(va_list ap)
{
    int     num;

    num = va_arg(ap, int);
    ft_putstr(ft_itoa(num));
}

void ft_s_ind(va_list ap)
{
    char *s_key;

    s_key = va_arg(ap, char *);
    while (*s_key) {
        ft_putchar(*s_key);
        s_key++;
    }
}