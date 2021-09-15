/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masashi <masashi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:08:26 by masashi           #+#    #+#             */
/*   Updated: 2021/09/14 18:08:27 by masashi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <stdio.h>
# include "libft.h"

# define BASE "0123456789abcdef"

int		ft_printf(const char *fmt, ...);
int		ft_puthexnbr(long hex);
int		ft_puthexbignbr(unsigned long hex);
int		ft_putpointer(unsigned long ptr);
size_t	ft_putstr(char *s);
int		print_c(char c);
int		print_s(char *s);
int		print_d_and_u(long nb, int digits);
int		print_u(unsigned long nb, int digits);
int		print_p(unsigned long ptr);
int		print_x(unsigned int hex);
int		print_lx(unsigned int hex);
void	ft_putchar_fd(char c, int fd);
int		print_percent(void);

#endif
