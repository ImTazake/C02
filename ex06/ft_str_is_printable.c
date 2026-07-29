/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 21:50:07 by tisilva           #+#    #+#             */
/*   Updated: 2026/07/29 10:49:18 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str1[] = "Hello 42!";
// 	char	str2[] = "Hello\n";
// 	char	str3[] = "";
// 	if (ft_str_is_printable(str1))
// 		write(1, "1\n", 2);
// 	else
// 		write(1, "0\n", 2);
// 	if (ft_str_is_printable(str2))
// 		write(1, "1\n", 2);
// 	else
// 		write(1, "0\n", 2);
// 	if (ft_str_is_printable(str3))
// 		write(1, "1\n", 2);
// 	else
// 		write(1, "0\n", 2);
// 	return (0);
// }