/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexbignbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masashi <masashi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 14:57:09 by masashi           #+#    #+#             */
/*   Updated: 2021/09/13 16:47:07 by masashi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putres(char *res)
{
	int	digits;

//ポインタの位置を動かすのではなく、index貼ったほうがfreeができるかできないかがわかりやすい？
	digits = 0;
	while (*res != '\0')
		res++;
	res--;
	while (*res != '\0')
	{
		digits += 1;
		ft_putchar_fd(ft_toupper(*res), 1);
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

int	ft_puthexbignbr(unsigned long hex)
{
	char	*base;
	char	*result;
	int		i;
	int		digits;

	i = 0;
	base = "0123456789abcdef";
	result = (char *)malloc(sizeof(char) * 100000);
	if (hex == 0)
		return (put_zero(result));
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
	return (digits);
}
