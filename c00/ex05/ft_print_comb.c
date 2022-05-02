/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carrodri <carrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 01:58:50 by carrodri          #+#    #+#             */
/*   Updated: 2022/04/13 04:41:05 by carrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	imprimir(char a, char b, char c);
void	ft_print_comb(void);

void	imprimir(char a, char b, char c)
{	
	char	e;
	char	v;

	e = ' ';
	v = ',';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
	{
		write(1, &v, 1);
		write(1, &e, 1);
	}
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	n2 = '1';
	n3 = '2';
	while (n1 <= '7')
	{
		imprimir(n1, n2, n3);
		n3++;
		if (n3 > '9')
		{
			n2++;
			n3 = n2 + 1;
		}
		if (n2 > '8')
		{
			n1++;
			n2 = n1 + 1;
			n3 = n2 + 1;
		}
	}
}
