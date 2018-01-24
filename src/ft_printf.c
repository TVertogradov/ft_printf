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

int ft_printf(const char *f, ...) {
    va_list ap;
    char *s_key;
    char c_key;
    int num;
    double d;

    va_start(ap, f);
    while (*f) {
        if (*f != '%') {
            ft_putchar(*f);
            f++;
            continue;
        }
        while (*++f == 'd' || *f == 'f' || *f == 's' || *f == 'c') {
            if (*f == 'd') {
                num = va_arg(ap, int);
                ft_putstr(ft_itoa(num));
                f++;
                break;
            } else if (*f == 's') {
                s_key = va_arg(ap, char *);
                while (*s_key) {
                    ft_putchar(*s_key);
                    s_key++;
                }
                f++;
                break;
            } else if (*f == 'c') {
                c_key = va_arg(ap, char);
                ft_putchar(c_key);
                f++;
                break;
            }
        }
        va_end(ap);
    }
}


int main(void)
{
    int n, b;
    char *s = "World";
    char c = 'b';

    n = -23;
    b = 11;
    ft_printf("\n%d Hello m%dy name new %s     %s < %c > I Love <<%c<<", n, b, s, s, 64, c);
    //miniprintf("\n%d Hello m%dy name new %s", n, b, s);
    //printf("\n%d Hello m%dy name %f new %s", n, b, dob, s);
    printf("\n%d Hello m%dy name new %s     %s < %c >", n, b, s, s, 64);

    return (0);

}
