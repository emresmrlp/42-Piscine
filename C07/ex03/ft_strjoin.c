/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:13:18 by ysumeral          #+#    #+#             */
/*   Updated: 2024/07/25 19:37:58 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		ch;
	char	*buffer;

	i = 0;
	j = 0;
	ch = 0;
	buffer = malloc(sizeof(strs));
	if (buffer == NULL)
		return (NULL);
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			buffer[ch++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			buffer[ch++] = sep[j++];
		i++;
	}
	buffer[ch] = '\0';
	return (buffer);
}

#include <stdio.h>
int main()
{
	char *c[] = {"serhat", "yunus", "topu", "tut"};
	printf("%s", ft_strjoin(4, c, "?=)!"));
}
