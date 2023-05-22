/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:37:21 by aramon            #+#    #+#             */
/*   Updated: 2023/05/22 12:25:27 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		s1len;
	int		s2len;
	char	*new;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (s1len + s2len + 1));
	if (new == NULL && s1len + s2len + 1 > 0)
		return (NULL);
	i = 0;
	while (i < s1len)
	{
		new[i] = (char)s1[i];
		i++;
	}
	while (i < s2len + s1len)
	{
		new[i] = (char)s2[i - s1len];
		i++;
	}
	new[i] = '\0';
	return (new);
}
