/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carrodri <carrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 19:16:00 by carrodri          #+#    #+#             */
/*   Updated: 2022/04/22 19:56:28 by carrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	i = 1;
	res = nb;
	if (power < 0)
		res = 0;
	else if (power == 0)
		res = 1;
	else
	{
		while (i < power)
		{
			res = res * nb;
			i++;
		}
	}
	return (res);
}
