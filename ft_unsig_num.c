/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsig_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:06:04 by mconde-s          #+#    #+#             */
/*   Updated: 2024/11/06 16:56:01 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putnbr_unsig(unsigned int n)
{
	static int	len = 0;
	char		c;

	if ((n > 9))
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	len++;
	return (len);
}

void	ft_unsig_num(va_list arg, int *count)
{
	unsigned int	n;
	int				len;

	n = va_arg(arg, int);
	len = ft_putnbr(n);
	*count += len;
}
