/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:50:48 by ysumeral          #+#    #+#             */
/*   Updated: 2024/07/23 16:12:29 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*buffer;
	int	size;

	size = max - min;
	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	buffer = (int *)malloc(sizeof(int) * size);
	if (buffer == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = buffer;
	i = 0;
	while (i < size)
		buffer[i++] = min++;
	return (size);
}
