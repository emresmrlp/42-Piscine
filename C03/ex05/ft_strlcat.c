/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:02:24 by ysumeral          #+#    #+#             */
/*   Updated: 2024/07/20 20:40:01 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	first_i;
	unsigned int	second_i;
	unsigned int	dest_len;
	unsigned int	src_len;

	first_i = 0;
	second_i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	second_i = dest_len;
	
	if (size == 0 || size <= dest_len)
		return (src_len + size);
		
	while (src[first_i] != '\0' && first_i < size - dest_len - 1)
	{
		dest[second_i] = src[first_i];
		first_i++;
		second_i++;
	}
	
	dest[second_i] = '\0';
	return (dest_len + src_len);
}

#include <stdio.h>
int main()
{
	char s1[20] = "yunus emre";
	char s2[] = "adana";
	printf("%d - %s", ft_strlcat(s1, s2, 20), s1);
}