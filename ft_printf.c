/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:44:24 by mconde-s          #+#    #+#             */
/*   Updated: 2024/11/06 17:53:37 by mconde-s         ###   ########.fr       */
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
		if (str[i] == '%')
		{
			i++;
			ft_format(str[i], arg, &count);
			// if (str[i + 1] != '\0')
			// 	i++;
		}
		else
			ft_putchar(str[i]);
		count++;
		i++;
	}
	va_end(arg);
	return (count);
}
// int main()
// {
// 	char str[] = "hola";
// 	char c;
// 	c = 'A';
// 	ft_printf("quetal\n%s\nestamos\n%c\n%%o\n%", str, c);
// 	printf("funcion original: quetal\n%s\nestamos\n%c\n%%o\n", str, c);
// 	return(0);
// }