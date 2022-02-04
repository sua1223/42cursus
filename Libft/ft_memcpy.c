/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujang <sujang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:15:56 by sujang            #+#    #+#             */
/*   Updated: 2022/02/02 11:16:33 by sujang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tmp;
	char	*s;
	size_t	i;

	if (dst == src)
		return (dst);
	tmp = dst;
	s = (char *)src;
	i = 0;
	while (n--)
	{
		tmp[i] = s[i];
		i++;
	}
	return (tmp);
}
