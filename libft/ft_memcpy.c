#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	char	*tmp;
	char	*s;
	size_t	i;

	if (dest == src)
		return (dest);
	tmp = dest;
	s = (char*)src;
	i = 0;
	while (num--)
	{
		tmp[i] = s[i];
		i++;
	}
	return (tmp);
}