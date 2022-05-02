/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carrodri <carrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 03:25:31 by carrodri          #+#    #+#             */
/*   Updated: 2022/04/14 18:45:13 by carrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (i < (size / 2))
	{
		x = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = x;
		i++;
	}
}
