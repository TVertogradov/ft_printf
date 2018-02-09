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
# include <inttypes.h>


typedef struct s_printf
{
    char mod;

}t_printf;

int     ft_printf(const char *format, ...);
char    *ft_itoa_base(uintmax_t value, int base);
char    *ft_itoa_base_A(uintmax_t value, int base);
int     ft_printf_count(const char *f, va_list ap, int n);

int     ft_c_ind(va_list ap);
int     ft_d_ind(va_list ap);
int     ft_s_ind(va_list ap);
int     ft_ld_ind(va_list ap);
int     ft_p_ind(va_list ap);
int     ft_oO_ind(va_list ap, char f);
int     check_l(char f, va_list ap);
int     ft_xX_ind(va_list ap, char f);
int     ft_uU_ind(va_list ap, char f);

#endif
