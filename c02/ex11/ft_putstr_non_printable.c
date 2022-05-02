/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carrodri <carrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 04:35:44 by carrodri          #+#    #+#             */
/*   Updated: 2022/04/18 03:07:27 by carrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

int	is_printable(char c)
{
	if (c >= 32 && c != 127)
	{
		return (0);
	}
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	char	c;
	char	*array_hex;
	char	conv_first;
	char	conv_sec;
	int		i;

	array_hex = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (is_printable(c) == 1)
		{
			write(1, "\\", 1);
			conv_sec = array_hex[c % 16];
			conv_first = array_hex[c / 16];
			write(1, &conv_first, 1);
			write(1, &conv_sec, 1);
		}
		else
		{
			write(1, &c, 1);
		}
		i++;
	}
}
