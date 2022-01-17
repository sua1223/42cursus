#include "libft.h"

void    *ft_calloc(size_t cnt, size_t size)
{
	void			*tmp;

	if (!(tmp = (char*)malloc(sizeof(char) * cnt * size)))
		return (NULL);
	ft_memset(tmp, 0, cnt * size);
	return (tmp);
}