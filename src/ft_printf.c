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
        if (*f != '%' || *(f + 1) == 37) {
            ft_putchar(*f);
            f++;
            continue;
        }
        while (*++f == 'd' || *f == 's' || *f == 'c' || *f == 'l') {
            if (*(f+1) == 'd')
            {
                check_l(*++f, ap);
                f++;
                break ;
            }
            else if (*f == 'd') {
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
    long int d1=78787;

    n = -23;
    b = 11;
    ft_printf("\n%d Hell%%o m%dy name new%% %s     %s < %c > I %c Love <<%c<< %ld\n", n, b, s, s, 64, c, c, d1);
    //miniprintf("\n%d Hello m%dy name new %s", n, b, s);
    //printf("\n%d Hello m%dy name %f new %s", n, b, dob, s);
    //printf("\n%d Hell%%o m%dy name new%% %s     %s < %c > I %c Love <<%c<< %ld\n", n, b, s, s, 64, c, c, d1);
    printf ("\nВывод числа типа long int:\n");
    ft_printf ("H%ld   %ld Hello\n",d1, d1);


        return (0);

}
