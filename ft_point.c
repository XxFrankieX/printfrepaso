/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:01:45 by mconde-s          #+#    #+#             */
/*   Updated: 2024/11/08 18:10:13 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_point(va_list arg, int *count)
{
	unsigned long	ptr;

	ptr = ((unsigned long)va_arg(arg, void *));
	if ((void *)ptr == NULL)
		write(1, "(nil)", 5);
	else
	{
		write(1, "0x", 2);
		(*count) += 2;
		ft_hexa_min(ptr, count);
	}
}
