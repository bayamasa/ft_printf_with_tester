/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masashi <masashi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:54:31 by masashi           #+#    #+#             */
/*   Updated: 2021/09/15 16:24:05 by masashi          ###   ########.fr       */
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
		ft_putchar_fd(result[i], 1);
		i--;
	}
	free(result);
	return (digits);
}

int	print_x(unsigned int hex)
{
	char	*result;
	int		i;

	i = 0;
	if (hex == 0)
		return (put_zero());
	result = convert_dec_to_hexstr(hex);
	if (!result)
		return (0);
	return (ft_putres(result));
}
