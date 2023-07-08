/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 10:51:17 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/08 20:27:53 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
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
// int main(void)
// {
// 	char source[] = "hello world";
// 	char *point = source;
// 	char destination[] = "       ";
// 	char *pointeur = destination;
//  	ft_strncpy(pointeur, point, 7);
// 	printf("%s\n", pointeur);
// 	return 0;
// }