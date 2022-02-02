/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujang <sujang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:16:10 by sujang            #+#    #+#             */
/*   Updated: 2022/02/02 11:16:50 by sujang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*str;

	i = ft_strlen(s);
	j = 0;
	str = (char *)s;
	if ((char)c == '\0')
		return (str + ft_strlen(s));
	while (i > 0)
	{
		if (str[i] == c)
			return (str + i);
		i--;
	}
	if (str[i] == c)
		return (str);
	return (NULL);
}
