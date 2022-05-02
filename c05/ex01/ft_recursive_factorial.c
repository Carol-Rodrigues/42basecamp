/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carrodri <carrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:07:26 by carrodri          #+#    #+#             */
/*   Updated: 2022/04/22 19:10:55 by carrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		res = 0;
	else if (nb <= 1)
		res = 1;
	else
		res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}
