/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masashi <masashi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:15:22 by masashi           #+#    #+#             */
/*   Updated: 2021/09/13 22:46:24 by masashi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masashi <masashi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 14:57:09 by masashi           #+#    #+#             */
/*   Updated: 2021/09/13 17:01:32 by masashi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putres(char *res)
{
	int	digits;
	
	digits = 0;
	while (*res != '\0')
		res++;
	res--;
	while (*res != '\0')
	{
		digits += 1;
		printf("res = %c", *res);
		ft_putchar_fd(*res, 1);
		res--;
	}
	return (digits);
}

static int	put_zero(char *res)
{
	ft_putchar_fd('0', 1);
	free(res);
	return (1);
}

static int	ft_puthex(unsigned long hex)
{
	char	*base;
	char	*result;
	int		i;
	int		digits;

	i = 0;
	base = "0123456789abcdef";
	// printf("hex = %lld\n", hex);
	result = (char *)malloc(sizeof(char) * 100);
	if (hex == 0)
	{
		return (put_zero(result));
	}
	while (1)
	{
		if (hex > 16)
		{
			*(result + i) = base[hex % 16];
			i++;
			hex /= 16;
		}
		else
		{
			*(result + i) = base[hex % 16];
			i++;
			if (hex / 16 == 1)
				*(result + i) = base[hex / 16];
			break ;
		}
	}
	digits = ft_putres(result);
	free(result);
	result = NULL;
	return (digits);
}

int	ft_putpointer(unsigned long ptr)
{
	int	digits;

	digits = 2;
	ft_putstr("0x");
	digits += ft_puthex(ptr);
	return (digits);
}
