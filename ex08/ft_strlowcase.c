/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 22:48:12 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/07 22:50:50 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	char_is_alpha_up(char c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	last_char;

	last_char = 0;
	while (str[last_char] != '\0')
	{
		if (char_is_alpha_up(str[last_char]))
		{	
			str[last_char] = str[last_char] + 32;
		}
		last_char++;
	}
	return (str);
}
// int main(void)
// {
// 	char source[] ="dfDF";
// 	char *point = source;
// 	printf("%s\n", ft_strlowcase(point));
// 	return 0;
// }
