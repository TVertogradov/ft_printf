#include "../include/ft_printf.h"

void ft_c_ind(va_list ap)
{
    char c_key;

    c_key = va_arg(ap, char);
    ft_putchar(c_key);
}

void ft_d_ind(va_list ap)
{
    int         num;

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

void ft_ld_ind(va_list ap)
{
    long int d1;

    d1 = va_arg(ap, long int);
    ft_putstr(ft_itoa(d1));
}

void check_l(char f, va_list ap)
{
    if (f == 'd' || f == 'i')
        ft_ld_ind(ap);
}
