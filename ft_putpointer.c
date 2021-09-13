/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masashi <masashi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:15:22 by masashi           #+#    #+#             */
/*   Updated: 2021/09/12 22:59:02 by masashi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putpointer(long ptr)
{
	ft_putstr("0x");
	printf("%lu\n", (long)ptr);
	ft_puthexnbr(ptr);
}
