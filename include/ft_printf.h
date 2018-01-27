/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvertohr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:57:15 by tvertohr          #+#    #+#             */
/*   Updated: 2018/01/15 16:02:34 by tvertohr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

typedef struct s_printf
{
    char mod;

}t_printf;

int ft_printf(const char *format, ...);

void ft_c_ind(va_list ap);
void ft_d_ind(va_list ap);
void ft_s_ind(va_list ap);
void ft_ld_ind(va_list ap);
void check_l(char f, va_list ap);

#endif
