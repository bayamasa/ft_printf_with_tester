/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masashi <masashi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:08:26 by masashi           #+#    #+#             */
/*   Updated: 2021/09/15 17:38:04 by masashi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

# define BASE "0123456789abcdef"
# define MAX_LEN 100

int		ft_printf(const char *fmt, ...);
int		print_c(char c);
int		print_s(char *s);
int		print_d_and_u(long nb, int digits);
int		print_u(unsigned long nb, int digits);
int		print_p(unsigned long ptr);
int		print_x(unsigned int hex);
int		print_lx(unsigned int hex);
int		print_percent(void);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(long n, int fd);
char	*convert_dec_to_hexstr(unsigned long dec);
int		put_zero(void);
size_t	ft_putstr(char *s);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *buf, int ch, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
size_t	ft_putstr(char *s);

#endif
