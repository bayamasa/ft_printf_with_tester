#include "libft.h"

size_t	ft_putstr(char *s)
{
	size_t	len;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	len = ft_strlen(s);
	while (len > STR_BUFF_SIZE)
	{
		write(1, s + i, STR_BUFF_SIZE);
		i = i + STR_BUFF_SIZE;
		len = len - STR_BUFF_SIZE;
	}
	write(1, s + i, len);
	return (len);
}
