/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carrodri <carrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 04:51:13 by carrodri          #+#    #+#             */
/*   Updated: 2022/04/14 22:59:30 by carrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	while (i < size - 1)
	{
		x = tab[i];
		y = tab[i + 1];
		if (x > y)
		{
			tab[i] = y;
			tab[i + 1] = x;
			i = -1;
		}
		i++;
	}
}
