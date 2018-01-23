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

int ft_printf(const char *format, ...)
{

}

int main(void)
{
    write(1, "t", 1);
    write(1, "u", 1);
    printf("Hello world");
    double a = average(2,10);
    printf("\n%F", a);
    return (0);

}
