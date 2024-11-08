/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:44:24 by mconde-s          #+#    #+#             */
/*   Updated: 2024/11/08 19:27:36 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	size_t	i;
	int		count;
	va_list	arg;

	va_start(arg, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != 0)
		{
			i++;
			ft_format(str[i], arg, &count);
		}
		else
			ft_putchar(str[i]);
		count++;
		i++;
	}
	va_end(arg);
	return (count);
}
int main()
{
	char str[] = "jeje";
	char str2[] = "jeje";
	char c;
	c = 'A';
	// printf("%i %u %s %p %x\n", -2147483648, -1, 0, 0, 0, 0);
	// ft_printf("%i %u %s %p %x%", -2147483648, -1, 0, 0, 0, 0);
	// ft_printf("quetal\n%s\nestamos\n%c\n%%o\n", str, c);
	// printf("funcion original:\nquetal\n%s\nestamos\n%c\n%%o\n", str, c);
	return(0);
}