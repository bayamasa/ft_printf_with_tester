/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_dec_to_hexstr.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masashi <masashi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:04:04 by masashi           #+#    #+#             */
/*   Updated: 2021/09/15 16:47:45 by masashi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*convert_dec_to_hexstr(unsigned long dec)
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

int	put_zero(void)
{
	ft_putchar_fd('0', 1);
	return (1);
}
