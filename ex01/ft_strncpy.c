/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 21:49:54 by tisilva           #+#    #+#             */
/*   Updated: 2026/07/29 10:47:39 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "Hello";
// 	char	dest[10];
// 	int		i;
// 	ft_strncpy(dest, src, 8);
// 	i = 0;
// 	while (i < 8)
// 	{
// 		if (dest[i] == '\0')
// 			write(1, "\\0", 2);
// 		else
// 			write(1, &dest[i], 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }