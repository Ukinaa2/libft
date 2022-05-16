/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:15:54 by gguedes           #+#    #+#             */
/*   Updated: 2022/05/16 11:23:06 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_start(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (set[j])
	{
		if (set[j] == s1[i])
		{
			count++;
			i++;
			j = -1;
		}
		j++;
	}
	return (count);
}

static int	count_end(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	count;

	i = ft_strlen(s1) - 1;
	j = 0;
	count = 0;
	while (set[j])
	{
		if (set[j] == s1[i])
		{
			count++;
			i--;
			j = -1;
		}
		j++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	start = count_start(s1, set);
	end = count_end(s1, set);
	str = (char *)malloc((ft_strlen(s1) - start - end + 1) * sizeof(char));
	if (str == 0)
		return (0);
	ft_strlcpy(str, s1 + start, ft_strlen(s1) - start - end + 1);
	return (str);
}
