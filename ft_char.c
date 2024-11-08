/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:39:33 by mconde-s          #+#    #+#             */
/*   Updated: 2024/11/06 16:53:19 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_char(va_list arg, int *count)
{
	char	c;

	c = (char)va_arg(arg, int);
	ft_putchar(c);
	(*count)++;
}
