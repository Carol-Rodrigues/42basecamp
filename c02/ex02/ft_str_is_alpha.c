/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carrodri <carrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:10:03 by carrodri          #+#    #+#             */
/*   Updated: 2022/04/18 02:45:20 by carrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'z')
		{
			counter++;
		}
		else if (str[i] > 'Z' && str[i] < 'a')
		{
			counter++;
		}
		i++;
	}
	if (counter == 0 || i == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
