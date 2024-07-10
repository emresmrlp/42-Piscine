/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:43:28 by ysumeral          #+#    #+#             */
/*   Updated: 2024/07/10 09:44:50 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	is_space;
	int	i;

	is_space = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_space == 1)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
			}
			is_space = 0;
		}
		if (str[i] == 32)
		{
			is_space = 1;
		}
		i++;
	}
	return (str);
}
