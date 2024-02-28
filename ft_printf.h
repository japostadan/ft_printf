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
// ft_printf.h
#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
int ft_strlen(const char *str);
void ft_putchar(char c);
void ft_putstr(char *str);
int ft_putnbr(int n);
int ft_putnbr_u(unsigned int n);
char *ft_ptr_to_hex(void *ptr); // Updated return type
char *ft_uitox(unsigned int n);
char *ft_uitoX(unsigned int n);

int ft_printf(const char *format, ...);

#endif // FT_PRINTF_H

