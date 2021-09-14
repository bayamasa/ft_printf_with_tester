/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masashi <masashi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 14:57:09 by masashi           #+#    #+#             */
/*   Updated: 2021/09/14 16:31:31 by masashi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putres(char *result)
{
	int	digits;
	int	i;

	digits = 0;
	i = 0;
	while (result[i] != '\0')
		i++;
	i--;
	while (result[i] != '\0')
	{
		digits += 1;
		ft_putchar_fd(ft_toupper(result[i]), 1);
		i--;
	}
	free(result);
	result = NULL;
	return (digits);
}

static int	put_zero(char *res)
{
	ft_putchar_fd('0', 1);
	free(res);
	res = NULL;
	return (1);
}

int	print_lx(unsigned long hex)
{
	char	*result;
	int		i;

	i = 0;
	result = (char *)ft_calloc(sizeof(char), 100000);
	if (hex == 0)
		return (put_zero(result));
	while (1)
	{
		if (hex > 16)
		{
			*(result + i) = BASE[hex % 16];
			i++;
			hex /= 16;
		}
		else
		{
			*(result + i) = BASE[hex % 16];
			i++;
			if (hex / 16 == 1)
				*(result + i) = BASE[hex / 16];
			break ;
		}
	}
	return (ft_putres(result));
}
