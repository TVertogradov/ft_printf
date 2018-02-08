#include "../include/ft_printf.h"

/*static int		ft_pow(int nb, int pow)
{
    if (pow == 0)
        return (1);
    else
        return (nb * ft_pow(nb, pow - 1));
}

char	*ft_itoa_base(uintmax_t value, int base)
{
    int		i;
    char	*nbr;
    int		neg;

    i = 1;
    neg = 0;
    if (value < 0)
    {
        if (base == 10)
            neg = 1;
        value *= -1;
    }
    while (ft_pow(base, i) - 1 < value)
        i++;
    nbr = (char*)malloc(sizeof(nbr) * i);
    nbr[i + neg] = '\0';
    while (i-- > 0)
    {
        nbr[i + neg] = (value % base) + (value % base > 9 ? 'a' - 10 : '0');
        value = value / base;
    }
    if (neg)
        nbr[0] = '-';
    return (nbr);
}*/

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

char *ft_itoa_base(uintmax_t value, int base)
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