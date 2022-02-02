/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujang <sujang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:15:57 by sujang            #+#    #+#             */
/*   Updated: 2022/02/02 11:16:35 by sujang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src_cl;
	unsigned char	*dst_cl;

	if (dst == src || !len)
		return (dst);
	src_cl = (unsigned char *)src;
	dst_cl = (unsigned char *)dst;
	if (dst < src)
	{
		while (len--)
			*(dst_cl++) = *(src_cl++);
	}
	else
	{
		while (len--)
			*(dst_cl + len) = *(src_cl + len);
	}
	return (dst);
}
