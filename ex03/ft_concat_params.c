/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 22:12:19 by miliu             #+#    #+#             */
/*   Updated: 2019/07/18 22:13:07 by miliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	*ft_concat_params(int argc, char **argv)
{
	char	*head;
	char	*str;
	int		i_argc;
	int		i_builder;
	int		total;

	i_argc = 0;
	total = 0;
	while (i_argc < argc)
		total += ft_strlen(argv[i_argc++]);
	head = (char *)malloc(sizeof(char) * (total + i_argc));
	i_argc = 0;
	i_builder = 0;
	while (++i_argc < argc)
	{
		str = argv[i_argc];
		while (*str)
			head[i_builder++] = *str++;
		head[i_builder++] = '\n';
	}
	head[i_builder - 1] = 0;
	return (head);
}

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
