/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carrodri <carrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 04:49:48 by carrodri          #+#    #+#             */
/*   Updated: 2022/04/13 04:42:19 by carrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar1(char a, char b, char c);
void	ft_putchar2(char a, char b);
void	print(int n1, int n2, int n3, int n4);
void	calc_numbers(int n1, int n2, int n3, int n4);

void	ft_putchar1(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_putchar2(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	print(int n1, int n2, int n3, int n4)
{
	char	e;
	char	v;

	e = ' ';
	v = ',';
	if (n1 == 57 && n2 == 56)
	{
		ft_putchar1(n1, n2, e);
		ft_putchar2(n3, n4);
	}
	else
	{
		ft_putchar1(n1, n2, e);
		ft_putchar2(n3, n4);
		write(1, &v, 1);
		write(1, &e, 1);
	}
}

void	calc(int n1, int n2, int n3, int n4)
{
	while (n1 < 58)
	{
		while (n2 < 58)
		{
			n3 = n1;
			n4 = n2 + 1;
			while (n3 < 58)
			{
				while (n4 < 58)
				{
					print(n1, n2, n3, n4);
					n4++;
				}
				n3++;
				n4 = 48;
			}
			n2++;
			n3 = 48;
		}
		n1++;
		n2 = 48;
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;
	int	n3;
	int	n4;

	n1 = 48;
	n2 = 48;
	n3 = 48;
	n4 = 49;
	calc(n1, n2, n3, n4);
}
