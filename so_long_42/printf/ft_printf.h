/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:01:05 by anagarc4          #+#    #+#             */
/*   Updated: 2023/06/05 14:54:19 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_format(char format, va_list args);
int		ft_putchar(int c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_putptr(unsigned long long ptr);
size_t	ft_strlen(const char *str);
int		ft_basehexa(unsigned int hexa, char form);
int		ft_basedec(unsigned int n);

#endif
