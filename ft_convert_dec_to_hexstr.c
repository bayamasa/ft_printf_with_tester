/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_dec_to_hexstr.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:04:04 by mhirabay          #+#    #+#             */
/*   Updated: 2021/09/23 15:21:36 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_convert_dec_to_hexstr(unsigned long dec)
{
	char	*hexstr;
	int		i;

	i = 0;
	hexstr = (char *)ft_calloc(sizeof(char), MAX_LEN);
	if (!hexstr)
		return (NULL);
	while (1)
	{
		*(hexstr + i) = BASE[dec % 16];
		i++;
		if (dec > 16)
			dec /= 16;
		else
		{
			if (dec / 16 == 1)
				*(hexstr + i) = BASE[dec / 16];
			break ;
		}
	}
	return (hexstr);
}

int	ft_put_zero(void)
{
	ft_putchar_fd('0', 1);
	return (1);
}
