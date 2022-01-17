#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t num;

	i = 0;
	num = size - 1;
	if (!dst || !src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && num > 0)
	{
		dst[i] = src[i];
		i++;
		num--;
	}
	if (size > 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}