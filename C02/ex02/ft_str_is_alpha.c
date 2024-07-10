/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:38:12 by ysumeral          #+#    #+#             */
/*   Updated: 2024/07/10 09:39:04 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_alphabet;

	is_alphabet = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65)
		{
			is_alphabet = 0;
		}
		if (str[i] > 90 && str[i] < 97)
		{
			is_alphabet = 0;
		}
		if (str[i] > 122)
		{
			is_alphabet = 0;
		}
		i++;
	}
	return (is_alphabet);
}
