/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 12:53:10 by jlozano-          #+#    #+#             */
/*   Updated: 2022/06/16 15:49:42 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	size;

	size = ft_strlen(s1);
	s2 = malloc(size * sizeof(char));
	ft_memcpy(s2, s1, size);
	return (s2);
}
