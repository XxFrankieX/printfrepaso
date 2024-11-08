/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:47:21 by mconde-s          #+#    #+#             */
/*   Updated: 2024/11/06 16:48:54 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	static int	len = 0;
	char		c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		len = 11;
		return (len);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		len = len + 1;
	}
	if ((n > 9))
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	len++;
	return (len);
}

void	ft_num(va_list arg, int *count)
{
	int	n;
	int	len;

	n = va_arg(arg, int);
	len = ft_putnbr(n);
	*count += len;
}
