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
	unsigned char	*src_new;
	unsigned char	*dst_new;

	if (dst == src || !len)
		return (dst);
	src_new = (unsigned char *)src;
	dst_new = (unsigned char *)dst;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (len--)
		*(dst_new + len) = *(src_new + len);
	return (dst);
}
