/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujang <sujang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:23:36 by sujang            #+#    #+#             */
/*   Updated: 2022/02/03 17:23:56 by sujang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!s || !str)
		return (NULL);
	i = 0;
	while (len-- && s[i])
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
