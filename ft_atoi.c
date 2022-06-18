/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <jlozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:56:26 by jlozano-          #+#    #+#             */
/*   Updated: 2022/06/16 12:51:33 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	z;
	size_t	sign;

	i = 0;
	z = 0;
	sign = 1;
	while (ft_isspace(str[z]))
		z++;
	if (*str == '\0')
		return (0);
	if (str[z] == '-' || str[z] == '+')
	{
		if (str[z] == '-')
			sign = -1;
		z++;
	}
	while (str[z] && str[z] >= '0' && str[z] <= '9')
	{
		i = i * 10 + str[z] - '0';
		z++;
	}
	return (i * sign);
}
