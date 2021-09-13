#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_char_printable(char c)
{
	if (c >= ' ' && c != 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;
	char			*base;

	base = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c == '\0')
			break ;
		if (is_char_printable(c))
			ft_putchar(c);
		else
		{
			ft_putchar('\\');
			ft_putchar(base[c / 16]);
			ft_putchar(base[c % 16]);
		}
		i++;
	}
}
