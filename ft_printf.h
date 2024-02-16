/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpostada <jpostada@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 21:30:44 by jpostada          #+#    #+#             */
/*   Updated: 2024/02/16 22:02:31 by jpostada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>

int ft_printf(const char *format, ...);

void convert_c(va_list args);
void convert_s(va_list args);
void convert_p(va_list args);
int convert_di(va_list args);
void convert_u(va_list args);
void convert_x(va_list args);
void convert_X(va_list args);
void convert_percent(va_list args);

char *ft_ptr_to_hex(void *ptr);
char *ft_itoa(int n);
char *ft_uitoa(unsigned int n);
char *ft_uitox(unsigned int n);
char *ft_uitoX(unsigned int n);

int ft_strlen(const char *str);
int ft_putnbr_u(unsigned int n); // Prototype for ft_putnbr_u

#endif

