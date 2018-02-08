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

int ft_printf_count(const char *f, va_list ap, int n)
{
    n = 0;
    while (*f) {
        if (*f != '%' || *(f + 1) == 37)
        {
            ft_putchar(*f);
            f++;
            n++;
            continue;
        }
        while (*++f == 'd' || *f == 's' || *f == 'c' || *f == 'l' || *f == 'i' || *f == 'p' || *f == 'o')
        {
            if (*(f+1) == 'd' || *(f+1) == 'i')
            {
                n += check_l(*++f, ap);
                f++;
                break ;
            }
            else if (*f == 'd' || *f == 'i')
            {
                n += ft_d_ind(ap);
                f++;
                break ;
            } else if (*f == 's')
            {
                n += ft_s_ind(ap);
                f++;
                break ;
            } else if (*f == 'c')
            {
                n += ft_c_ind(ap);
                f++;
                break ;
            } else if (*f == 'p')
            {
                n += ft_p_ind(ap);
                f++;
                break ;
            } //else if (*f == 'o')
            //{
             //   n += ft_o_ind(ap);
             //   f++;
             //   break ;
            //}
        }
    }
    return (n);
}

int     ft_printf(const char *format, ...)
{
    int     count;
    va_list ap;

    va_start(ap, format);
    count = ft_printf_count(format, ap, count);
    va_end(ap);
    return (count);
}