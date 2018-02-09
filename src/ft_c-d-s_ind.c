#include "../include/ft_printf.h"

int ft_c_ind(va_list ap)
{
    char c_key;

    c_key = va_arg(ap, char);
    ft_putchar(c_key);

    return (1);
}

int ft_d_ind(va_list ap)
{
    int     num;
    char    *s;
    int     len;

    num = va_arg(ap, int);
    s = ft_itoa(num);
    len = ft_strlen(s);
    ft_putstr(s);
    return (len);
}

int ft_s_ind(va_list ap)
{
    char    *s_key;
    int     len;

    s_key = va_arg(ap, char *);
    len = ft_strlen(s_key);
    while (*s_key) {
        ft_putchar(*s_key);
        s_key++;
    }
    return (len);
}

int ft_ld_ind(va_list ap)
{
    long int    d1;
    int         len;
    char        *s;

    d1 = va_arg(ap, long int);
    s = ft_itoa(d1);
    len = ft_strlen(s);
    ft_putstr(s);
    return (len);
}

int check_l(char f, va_list ap)
{
    int     len;

    if (f == 'd' || f == 'i')
        return (len = ft_ld_ind(ap));
}

int ft_p_ind(va_list ap)
{
    char    *p_key;
    int     len;

    ft_putstr("0x");
    p_key = ft_itoa_base(va_arg(ap, uintmax_t), 16);
    ft_putstr(p_key);
    len = ft_strlen(p_key);
    return (len + 2);
}

int ft_oO_ind(va_list ap, char f)
{
    char    *key;
    int     len;

    if (f == 'o')
        key = ft_itoa_base(va_arg(ap, unsigned int), 8);
    else
        key = ft_itoa_base_A(va_arg(ap, unsigned int), 8);
    ft_putstr(key);
    len = ft_strlen(key);
    return (len);
}

int ft_xX_ind(va_list ap, char f)
{
    char    *key;
    int     len;

    if (f == 'x')
        key = ft_itoa_base(va_arg(ap, unsigned int), 16);
    else
        key = ft_itoa_base_A(va_arg(ap, unsigned int), 16);
    ft_putstr(key);
    len = ft_strlen(key);
    return (len);
}

int ft_uU_ind(va_list ap, char f)
{
    char    *key;
    int     len;

    if (f == 'u')
        key = ft_itoa_base(va_arg(ap, unsigned int), 10);
    else
        key = ft_itoa_base_A(va_arg(ap, unsigned int), 10);
    ft_putstr(key);
    len = ft_strlen(key);
    return (len);
}

