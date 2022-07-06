/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:54:41 by jlozano-          #+#    #+#             */
/*   Updated: 2022/07/06 12:13:35 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	char	*dst_aux;

	if (!s)
		return (NULL);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	dst_aux = dst;
	while (*s && len)
	{
		if (start)
			start--;
		else if (len)
		{
			*dst = *s;
			dst++;
			len--;
		}
		s++;
	}
	*dst = '\0';
	return (dst_aux);
}
