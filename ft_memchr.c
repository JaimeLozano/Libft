/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:04:53 by jlozano-          #+#    #+#             */
/*   Updated: 2022/06/15 19:07:59 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_aux;

	s_aux = (unsigned char *)s;
	while (*s_aux != (unsigned char)c && n--)
	{
		if (*s_aux == '\0')
			return (NULL);
		s_aux++;
	}
	return (s_aux);
}
