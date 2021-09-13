#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <stdio.h>
# include "libft.h"

int		ft_printf(const char *fmt, ...);
int		ft_puthexnbr(long hex);
int		ft_puthexbignbr(unsigned long hex);
void	ft_putpointer(long ptr);
size_t	ft_putstr(char *s);
int		print_c(char c);
int		print_s(char *s);
int		print_d_and_u(long nb, int digits);
int	print_u(unsigned long nb, int digits);
void	ft_putchar_fd(char c, int fd);

#endif
