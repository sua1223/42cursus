/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujang <sujang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:16:05 by sujang            #+#    #+#             */
/*   Updated: 2022/02/02 11:16:43 by sujang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	num;

	i = 0;
	num = dstsize - 1;
	if (!dst || !src)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && num > 0)
	{
		dst[i] = src[i];
		i++;
		num--;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}
