/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:31:30 by mconde-s          #+#    #+#             */
/*   Updated: 2024/11/06 16:55:36 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa_min(unsigned int n, int *count)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (n >= 16)
		ft_hexa_min(n / 16, count);
	ft_putchar(hexa[n % 16]);
	(*count)++;
}
