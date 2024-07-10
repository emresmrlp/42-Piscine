/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:42:10 by ysumeral          #+#    #+#             */
/*   Updated: 2024/07/10 09:42:12 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_printable;

	is_printable = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 33 || str[i] == 127)
		{
			is_printable = 0;
		}
		i++;
	}
	return (is_printable);
}
