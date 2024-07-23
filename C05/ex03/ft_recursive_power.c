/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:30:50 by ysumeral          #+#    #+#             */
/*   Updated: 2024/07/22 09:11:34 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 0;
	if (power > 0)
		result = nb * ft_recursive_power(nb, power - 1);
	else if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (result);
}
