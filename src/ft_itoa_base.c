#include "../include/ft_printf.h"

static int  ft_len(uintmax_t n, int b)
{
    int   i;

    i = 1;
    while (n/b)
    {
        n /= b;
        i++;
    }
    return (i);
}

char *ft_itoa_base(uintmax_t value, uintmax_t base)
{
    int len;
    uintmax_t n;
    char *str;

    len = ft_len(value, base);
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    str[len] = '\0';
    len--;
    while (value >= base)
    {
        n = value;
        value /= base;
        n -= value * base;
        if (n >= 10 && n <= base)
            str[len] = n + 87;
        else
            str[len] = n + 48;
        len--;
    }
    if (value >= 10 && value < base)
        str[len] = (value + 87);
    if (value < 10)
        str[len] = value + 48;
    return (str);
}

char *ft_itoa_base_A(uintmax_t value, uintmax_t base)
{
    int len;
    uintmax_t n;
    char *str;

    len = ft_len(value, base);
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    str[len] = '\0';
    len--;
    while (value >= base)
    {
        n = value;
        value /= base;
        n -= value * base;
        if (n >= 10 && n <= base)
            str[len] = n + 55;
        else
            str[len] = n + 48;
        len--;
    }
    if (value >= 10 && value < base)
        str[len] = (value + 55);
    if (value < 10)
        str[len] = value + 48;
    return (str);
}