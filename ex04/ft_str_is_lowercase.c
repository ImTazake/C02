/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 21:50:02 by tisilva           #+#    #+#             */
/*   Updated: 2026/07/29 10:47:12 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str1[] = "hello";
// 	char	str2[] = "Hello";
// 	char	str3[] = "";
// 	if (ft_str_is_lowercase(str1))
// 		write(1, "1\n", 2);
// 	else
// 		write(1, "0\n", 2);
// 	if (ft_str_is_lowercase(str2))
// 		write(1, "1\n", 2);
// 	else
// 		write(1, "0\n", 2);
// 	if (ft_str_is_lowercase(str3))
// 		write(1, "1\n", 2);
// 	else
// 		write(1, "0\n", 2);
// 	return (0);
// }