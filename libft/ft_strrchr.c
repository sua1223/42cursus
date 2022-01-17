#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		j;
	char	*s;

	i = ft_strlen(str);
	j = 0;
	s = (char*)str;
	if ((char)c == '\0')
		return (s + ft_strlen(str));
	while (i > 0)
	{
		if (s[i] == c)
			return (s + i);
		i--;
	}
	if (s[i] == c)
		return (s);
	return (NULL);
}