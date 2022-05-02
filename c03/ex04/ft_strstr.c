/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carrodri <carrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 05:30:46 by carrodri          #+#    #+#             */
/*   Updated: 2022/04/21 15:06:40 by carrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

int	ft_compare(char *str, char *to_find)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (to_find[i] != '\0')
	{
		if (to_find[i] != str[i])
		{
			counter = 0;
			// i++;		
			break ;
		}
		else
		{
			counter = 1;
			i++;
		}
	}
	return (counter);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		counter;
	char	*res;

	i = 0;
	counter = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (str[i] != '\0')
	{
		res = &str[i];
		counter = ft_compare(res, to_find);
		if (counter)
			return (res);
		i++;
	}
	return (0);
}
