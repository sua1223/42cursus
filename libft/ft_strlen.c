#include "libft.h"

size_t	ft_strlen(char *str)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i] != 0)
	{
		len++;
		i++;
	}
	return (len);
}