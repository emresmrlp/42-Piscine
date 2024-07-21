/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:54:55 by ysumeral          #+#    #+#             */
/*   Updated: 2024/07/21 14:00:54 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_skip_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		else
			return (i);
	}
	return (i);
}

void	ft_set_sign(int *i, int *sign, char *str)
{
	while (str[*i] != '\0')
	{
		if (str[*i] == '-')
		{
			*sign *= -1;
			*i += 1;
		}
		else if (str[*i] == '+')
			*i += 1;
		else
			break ;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = ft_skip_space(str);
	sign = 1;
	result = 0;
	ft_set_sign(&i, &sign, str);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result *= 10;
			result += str[i] - '0';
			i++;
		}
		else
			break ;
	}
	return (result * sign);
}
