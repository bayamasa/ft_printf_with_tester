/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:54:31 by mhirabay          #+#    #+#             */
/*   Updated: 2021/09/23 15:23:39 by mhirabay         ###   ########.fr       */
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

int	ft_print_x(unsigned int hex)
{
	char	*result;
	int		i;

	i = 0;
	if (hex == 0)
		return (ft_put_zero());
	result = ft_convert_dec_to_hexstr(hex);
	if (!result)
		return (0);
	return (ft_putres(result));
}
