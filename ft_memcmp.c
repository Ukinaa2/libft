/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 10:55:09 by gguedes           #+#    #+#             */
/*   Updated: 2022/05/16 13:53:13 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i) && i < n)
		i++;
	if (i == n)
		return (0);
	else
		return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}
