/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 21:49:59 by tisilva           #+#    #+#             */
/*   Updated: 2026/07/29 10:47:28 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str1[] = "12345";
// 	char	str2[] = "12a45";
// 	char	str3[] = "";
// 	if (ft_str_is_numeric(str1))
// 		write(1, "1\n", 2);
// 	else
// 		write(1, "0\n", 2);
// 	if (ft_str_is_numeric(str2))
// 		write(1, "1\n", 2);
// 	else
// 		write(1, "0\n", 2);
// 	if (ft_str_is_numeric(str3))
// 		write(1, "1\n", 2);
// 	else
// 		write(1, "0\n", 2);
// 	return (0);
// }