#include "../include/ft_printf.h"

char	*ft_itoa_base(int value, int base)
{
    char    *nums = "0123456789ABCDE";
    char    str[50];
    int     i;
    int     len;

    i = 0;

    while (value)
    {
        len = value - (base*(value / base));
        str[i] = nums[len];
    }



}


