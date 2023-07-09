/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 09:40:15 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/09 15:21:50 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i == size - 1)
		{
			dest[i] = '\0';
		}
		else if (i < size - 1)
		{
			dest[i] = src[i];
		}
		else
		{
			return (i - 1);
		}
		i++;
	}
	return (i);
}
// int	main()
// {
//  	char source[] ="hello world";
//  	char dest[20]= "     ";
// 	char *destpint = dest;
//  	char *point = source;
//  	printf("%d\n", ft_strlcpy(destpint, point, 11));
// 	printf("%s\n", dest);
//  	return 0;
// }
