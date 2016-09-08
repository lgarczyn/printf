/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarczyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 16:31:19 by lgarczyn          #+#    #+#             */
/*   Updated: 2016/08/08 16:31:21 by lgarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "libft.h"
# include <stdlib.h>
# include <stdarg.h>

int						ft_printf(const char *restrict format, ...);

# define MIN(a,b)		(((a)<(b))?(a):(b))
# define MAX(a,b)		(((a)>(b))?(a):(b))
# define CLAMP(x,lo,hi)	MIN(hi, MAX(lo,x))

typedef enum			e_bool
{
	false = 0,
	true = 1,
}						t_bool;

typedef unsigned int	t_uint;

typedef enum			e_modifier
{
	m_none = 0,
	m_verbose = 1,
	m_zero_padded = 2,
	m_left_justified = 4,
	m_always_signed = 8,
	m_plus_is_space = 16,
	m_uppercase = 32,
	m_unsigned = 64,
	m_always_verbose = 128,
}						t_modifier;

typedef enum			e_length
{
	l_none,
	l_hh,
	l_h,
	l_l,
	l_ll,
	l_j,
	l_z,
	l_t,
}						t_length;

typedef struct			s_info
{
	t_modifier			modifiers;
	int					min_width;
	int					precision;
	t_length			input_len;
	int					base;
}						t_info;

typedef void			(*t_callback)(va_list arg, t_info info);

typedef struct			s_arg
{
	char				name;
	t_callback			callback;
	t_info				info;
}						t_arg;

intmax_t				get_int_arg(va_list arg, t_length l);
uintmax_t				get_uint_arg(va_list arg, t_length l);

void					putchar_padded(int c, t_info info);

void					display_int(va_list arg, t_info info);
void					display_char(va_list arg, t_info info);
void					display_str(va_list arg, t_info info);
void					display_escape(va_list arg, t_info info);

void					display(char format, t_info info, va_list list);

#endif
