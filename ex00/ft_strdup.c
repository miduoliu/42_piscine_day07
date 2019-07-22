/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 19:29:20 by miliu             #+#    #+#             */
/*   Updated: 2019/07/18 19:29:32 by miliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	int		src_size;
	char	*dup;
	char	*duplic;

	src_size = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * (src_size + 1));
	duplic = dup;
	while (*src)
	{
		*duplic = *src;
		duplic++;
		src++;
	}
	*duplic = '\0';
	return (dup);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}
