/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 21:09:34 by gguedes           #+#    #+#             */
/*   Updated: 2022/05/14 22:30:15 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (!c)
		return ((char *)s + ft_strlen(s));
	i = ft_strlen(s);
	while (i--)
		if (s[i] == c)
			return ((char *)(s + i));
	return (0);
}
