#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <stdio.h>
# include "libft.h"

void	ft_putchar_fd(char c, int fd);
int		ft_printf(const char *fmt, ...);

#endif
