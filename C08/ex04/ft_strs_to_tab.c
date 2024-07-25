/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 18:17:02 by ysumeral          #+#    #+#             */
/*   Updated: 2024/07/25 18:33:59 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	str_len;

	str_len = 0;
	while (str[str_len] != '\0')
		str_len++;
	return (str_len);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*buffer;

	buffer = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (buffer == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		buffer[i].size = ft_strlen(av[i]);
		buffer[i].str = av[i];
		buffer[i].copy = ft_strdup(av[i]);
		i++;
	}
	buffer[i].str = 0;
	buffer[i].copy = 0;
	return (buffer);
}
