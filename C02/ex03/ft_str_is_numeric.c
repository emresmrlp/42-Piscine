/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:39:19 by ysumeral          #+#    #+#             */
/*   Updated: 2024/07/10 09:39:57 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	is_number;
	int	i;

	is_number = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 && str[i] > 57)
		{
			is_number = 0;
		}
		i++;
	}
	return (is_number);
}
