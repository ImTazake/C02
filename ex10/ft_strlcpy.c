/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 21:50:18 by tisilva           #+#    #+#             */
/*   Updated: 2026/07/29 11:09:07 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (src[len])
		len++;
	if (!size)
		return (len);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

// int	main(void)
// {
// 	char			src[] = "Hello, World!";
// 	char			dest[20];
// 	unsigned int	len;
// 	len = ft_strlcpy(dest, src, sizeof(dest));
// 	if (len == 13)
// 		write(1, "13\n", 3);
// 	return (0);
// }