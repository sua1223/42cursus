#include "libft.h"

char			*ft_strdup(const char *s)
{
	size_t	i;
	char	*tmp;

	if (!(tmp = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		tmp[i] = s[i];
		i++;
	}
	if (i != 0)
		tmp[i] = '\0';
	return (tmp);
}