#include "libft.h"

void						*ft_memchr(void *src,
		int value, size_t n)
{
	size_t				i;
	unsigned char		*tmp;
	unsigned char		c;

	i = 0;
	c = (unsigned char)value;
	tmp = (unsigned char*)src;
	while (i < n)
	{
		if (c == tmp[i])
			return (tmp + i);
		i++;
	}
	return (NULL);
}