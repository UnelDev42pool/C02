/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 22:34:47 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/07 22:47:11 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	char_is_alpha_low(char c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	return (0);
}

char	*ft_strupcase(char *str)
{
	int last_char;
	
	last_char = 0;
	while (str[last_char] != '\0')
	{
		if (char_is_alpha_low(str[last_char]))
		{	
			str[last_char] = str[last_char] - 32;
		}
		last_char++;
	}
	return (str);
}
// int main(void)
// {
// 	char source[] ="dfD";
// 	char *point = source;
// 	printf("%s\n", ft_strupcase(point));
// 	return 0;
// }
