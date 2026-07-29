/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 21:49:57 by tisilva           #+#    #+#             */
/*   Updated: 2026/07/29 11:13:36 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str1[] = "Hello";
// 	char	str2[] = "Hello42";
// 	char	str3[] = "";
// 	if (ft_str_is_alpha(str1))
// 		write(1, "1\n", 2);
// 	else
// 		write(1, "0\n", 2);
// 	if (ft_str_is_alpha(str2))
// 		write(1, "1\n", 2);
// 	else
// 		write(1, "0\n", 2);
// 	if (ft_str_is_alpha(str3))
// 		write(1, "1\n", 2);
// 	else
// 		write(1, "0\n", 2);
// 	return (0);
// }
