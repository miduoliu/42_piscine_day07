/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 21:19:18 by miliu             #+#    #+#             */
/*   Updated: 2019/07/18 21:19:29 by miliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (((long)max - (long)min)));
	if (!*range)
		return (0);
	i = 0;
	while (min + i < max)
	{
		range[0][i] = min + i;
		i++;
	}
	return (i);
}
