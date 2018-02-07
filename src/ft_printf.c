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



int ft_printf_count(const char *f, va_list ap, int n) {
    while (*f) {
        if (*f != '%' || *(f + 1) == 37) {
            ft_putchar(*f);
            f++;
            continue;
        }
        while (*++f == 'd' || *f == 's' || *f == 'c' || *f == 'l' || *f == 'i' || *f == 'p') {
            if (*(f+1) == 'd' || *(f+1) == 'i')
            {
                check_l(*++f, ap);
                f++;
                break ;
            }
            else if (*f == 'd' || *f == 'i') {
                ft_d_ind(ap);
                f++;
                break ;
            } else if (*f == 's' || *f == 'p') {
                ft_s_ind(ap);
                f++;
                break ;
            } else if (*f == 'c') {
                ft_c_ind(ap);
                f++;
                break ;
            }
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

int main(int argc, char **argv)
{
    int n, b;
    char *s = "World";
    char c = 'b';
    unsigned long int d1=78787;

    n = -23;
    b = 11;
    ft_printf("\n%d Hell%%o m%iy name new%% %s  %ld   %s < %c > I %c Love <<%c<< %ld, %s\n", n, b, s, d1, s, 64, c, c, d1, "Tima");
    printf("\n%d Hell%%o m%iy name new%% %s  %ld   %s < %c > I %c Love <<%c<< %ld\n", n, b, s, d1, s, 64, c, c, d1);
    //miniprintf("\n%d Hello m%dy name new %s", n, b, s);
    //printf("\n%d Hello m%dy name %f new %s", n, b, dob, s);
    //printf("\n%d Hell%%o m%dy name new%% %s     %s < %c > I %c Love <<%c<< %ld\n", n, b, s, s, 64, c, c, d1);
    printf ("\n6. Вывод числа типа long int:\n");
    ft_printf ("H%ld   %li Hel  %clo%ld\n",d1, d1, 37, d1);
    ft_printf ("\n6. Вывод указателя:\n");
    { char d1[3]="abc";
        printf ("%p\n",d1);
    }
    char d[4] = "abc";
    //printf("%p", d1);
    char *p;
    printf("ITOA_BASE %s", ft_itoa_base(10, 16));


        return (0);

}
