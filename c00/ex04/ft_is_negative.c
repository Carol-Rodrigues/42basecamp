/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carrodri <carrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 01:43:15 by carrodri          #+#    #+#             */
/*   Updated: 2022/04/08 01:56:19 by carrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	opcao1;
	char	opcao2;

	opcao1 = 'N';
	opcao2 = 'P';
	if (n < 0)
	{		
		write(1, &opcao1, 1);
	}
	else
	{		
		write(1, &opcao2, 1);
	}
}
