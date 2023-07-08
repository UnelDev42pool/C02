/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 10:14:20 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/08 20:29:44 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	i++;
	dest[i] = '\0';
	return (dest);
}

// int main(void)
// {
//     char source[] = "hello world";
// 	char *point = source;
//     char destination[] = "                ";
// 	char *pointeur = destination;
//  	ft_strcpy(pointeur, point);
//     printf("%s\n", pointeur);
//     return 0;
// }
