/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 11:08:21 by gguedes           #+#    #+#             */
/*   Updated: 2022/05/16 11:45:53 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	while (big[i] && i < len)
	{
		if (ft_strncmp(big + i, little, ft_strlen(little)) == 0)
			return ((char *)(big + i));
		i++;
	}
	return (0);
}
