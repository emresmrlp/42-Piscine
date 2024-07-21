/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:02:19 by ysumeral          #+#    #+#             */
/*   Updated: 2024/07/20 20:32:24 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	first_i;
	int	second_i;

	first_i = 0;
	if (to_find[first_i] == '\0')
		return (str);
	while (str[first_i] != '\0')
	{
		second_i = 0;
		while (to_find[second_i] == str[first_i + second_i])
		{
			if (to_find[second_i + 1] == '\0')
				return (str + first_i);
			second_i++;
		}
		first_i++;
	}
	return (0);
}
