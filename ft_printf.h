/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 21:30:44 by jpostada          #+#    #+#             */
/*   Updated: 2024/02/28 12:09:07 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

/* ft_printf.c */
int			ft_select_format(char const format, va_list ap, int *len);
int			ft_printf_logic(char const *format, va_list ap, int *len);
int			ft_printf(char const *format, ...);

/* ft_printf_utils.c */
void			ft_str_toupper(char *str);
unsigned int		ft_baselen(char format);
size_t			ft_ulen_base(unsigned long long n, unsigned int base_len);
char			*ft_utoa_base(unsigned long long n, unsigned int base_len);
int			ft_printf_putnbr(char format, char *to_write, int *len);
char			*ft_itoa(int n);
void			*ft_calloc(size_t count, size_t size);
void			ft_str_toupper(char *str);
int			ft_toupper(int c);

/* ft_printf_char.c */
int			ft_printf_char(va_list ap, int *len);

/* ft_printf_string.c */
int			ft_printf_string(va_list ap, int *len);

/* ft_printf_pointer.c */
int			ft_printf_pointer(char const format, va_list ap, int *len);

/* ft_printf_int.c */
int			ft_printf_int(char const format, va_list ap, int *len);

/* ft_printf_uint.c */
int			ft_printf_uint(char const format, va_list ap, int *len);

/* ft_printf_hexa.c */
int			ft_printf_hexa(char const format, va_list ap, int *len);

/* ft_printf_percent.c */
int			ft_printf_percent(char const format, int *len);
#endif
