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

    va_start(ap, f);
    while (*f) {
        if (*f != '%') {
            ft_putchar(*f);
            f++;
            continue;
        }
        while (*++f == 'd' || *f == 's' || *f == 'c') {
            if (*f == 'd') {
                ft_d_ind(ap);
                f++;
                break;
            } else if (*f == 's') {
                ft_s_ind(ap);
                f++;
                break;
            } else if (*f == 'c') {
                ft_c_ind(ap);
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
    ft_printf("\n%d Hello m%dy name new %s     %s < %c > I %c Love <<%c<<", n, b, s, s, 64, c, c);
    //miniprintf("\n%d Hello m%dy name new %s", n, b, s);
    //printf("\n%d Hello m%dy name %f new %s", n, b, dob, s);
    printf("\n%d Hello m%dy name new %s     %s < %c > I %c Love <<%c<<", n, b, s, s, 64, c, c);

    return (0);

}
