/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvertohr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 16:08:24 by tvertohr          #+#    #+#             */
/*   Updated: 2018/01/15 16:08:25 by tvertohr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int ft_printf(const char *f, ...)
{
    va_list ap;
    //char *tmp;
    int num;

    va_start(ap, f);
    while (*f)
    {
        if (*f != '%')
        {
            ft_putchar(*f);
            f++;
            continue ;
        }
        while (*++f == 'd')
        {
            num = va_arg(ap, int);
            ft_putstr(ft_itoa(num));
            f++;
            break ;
        }
    }
    va_end(ap);
}

int main(void)
{
    int n, b;

    n = 23;
    b = 11;
    ft_printf("%d Hello m%dy name %d", n, b, n);
    write(1, "\n", 1);
    miniprintf("%d Hello m%dy name %d", n, b, n);

    return (0);

}
