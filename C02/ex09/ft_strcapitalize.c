/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:43:28 by ysumeral          #+#    #+#             */
/*   Updated: 2024/07/20 10:36:34 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize;

	i = 0;
	capitalize = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			capitalize = 0;
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (capitalize == 1)
			{
				str[i] -= 32;
				capitalize = 0;
			}
		}
		else
			capitalize = 1;
		i++;
	}
	return (str);
}
