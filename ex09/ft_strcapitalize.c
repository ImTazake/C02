/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 21:50:15 by tisilva           #+#    #+#             */
/*   Updated: 2026/07/29 10:53:04 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	start;

	ft_strlowcase(str);
	i = 0;
	start = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (start && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			start = 0;
		}
		else
			start = 1;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "aPReNDER c e MUITO diVERTIDO.";
// 	int		i;
// 	ft_strcapitalize(str);
// 	i = 0;
// 	while (str[i])
// 	{
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }