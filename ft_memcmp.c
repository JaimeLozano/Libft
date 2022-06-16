/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:25:10 by jlozano-          #+#    #+#             */
/*   Updated: 2022/06/15 19:09:38 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *dst, const void *src, size_t n)
{
	unsigned char	*uc_dst;
	unsigned char	*uc_src;

	uc_dst = (unsigned char *)dst;
	uc_src = (unsigned char *)src;
	while (*uc_dst == *uc_src && n--)
	{
		if (!*uc_dst)
			return (0);
		uc_dst++;
		uc_src++;
	}
	return (*uc_dst - *uc_src);
}
