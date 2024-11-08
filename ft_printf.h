/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:14:12 by mconde-s          #+#    #+#             */
/*   Updated: 2024/11/08 18:11:02 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int				ft_printf(char const *str, ...);
void			ft_format(const char format, va_list arg, int *count);
void			ft_char(va_list arg, int *count);
void			ft_str(va_list arg, int *count);
void			ft_perc(int *count);
void			ft_unsig_num(va_list arg, int *count);
void			ft_hexa_max(unsigned long n, int *count);
void			ft_hexa_min(unsigned long n, int *count);
void			ft_num(va_list arg, int *count);
void			ft_point(va_list arg, int *count);

void			ft_putchar(char c);
int				ft_putnbr(int n);
void			ft_putstr(char *str);
size_t			ft_strlen(char *str);
unsigned int	ft_putnbr_unsig(unsigned int n);

#endif