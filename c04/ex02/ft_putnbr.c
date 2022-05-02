/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carrodri <carrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 01:55:07 by carrodri          #+#    #+#             */
/*   Updated: 2022/04/21 18:48:49 by carrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_number_abs(int number)
{
	if (number < 0)
		number = number * -1;
	return (number);
}

void	ft_putnbr(int nb)
{
	int	nb_converted;
	int	abs_nb_converted;

	nb_converted = nb % 10;
	abs_nb_converted = ft_number_abs(nb_converted);
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	if (nb < 0 && nb / 10 == 0)
		ft_putchar('-');
	ft_putchar(abs_nb_converted + 48);
}
