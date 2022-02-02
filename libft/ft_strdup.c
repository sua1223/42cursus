/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujang <sujang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:16:01 by sujang            #+#    #+#             */
/*   Updated: 2022/02/02 11:16:40 by sujang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	char	*s;
	int		s_len;

	s = (char *)s1;
	s_len = ft_strlen(s) + 1;
	ptr = (char *)malloc(s_len);
	if (ptr)
		ft_strlcpy(ptr, s, s_len);
	return (ptr);
}
