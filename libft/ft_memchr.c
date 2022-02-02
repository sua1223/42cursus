/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sujang <sujang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:15:52 by sujang            #+#    #+#             */
/*   Updated: 2022/02/02 11:16:29 by sujang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*tmp;
	unsigned char		a;

	i = 0;
	a = (unsigned char)c;
	tmp = (unsigned char *)s;
	while (i < n)
	{
		if (a == tmp[i])
			return (tmp + i);
		i++;
	}
	return (NULL);
}
