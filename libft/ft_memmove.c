#include "libft.h"

void					*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src1;
	unsigned char	*dest1;

	i = 0;
	if (dest == src || n == 0)
		return (dest);
	src1 = (unsigned char*)src;
	dest1 = (unsigned char*)dest;
	if (dest1 < src1)
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	else
		while (i < n)
		{
			dest1[n - i - 1] = src1[n - i - 1];
			i++;
		}
	return (dest);
}