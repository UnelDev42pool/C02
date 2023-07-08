/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 22:52:14 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/08 21:08:24 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	char_is_alphanum(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	last_char;

	last_char = 0;
	while (str[last_char] != '\0')
	{
		if (char_is_alphanum(str[last_char]))
		{
			if (str[last_char] <= 'z' && str[last_char] >= 'a')
				str[last_char] = str[last_char] - 32;
			last_char++;
			while (char_is_alphanum(str[last_char]))
			{
				if (str[last_char] <= 'Z' && str[last_char] >= 'A')
					str[last_char] = str[last_char] + 32;
				last_char++;
			}
		}
		last_char++;
	}
	return (str);
}
// #include <stdio.h>
// int main(void)
// {
// 	char source[] ="salut, commEnt tu vas 
// ? 42mots quaRAnte-deux; cinquante+et+un";
// 	char *point = source;
// 	printf("%s\n", ft_strcapitalize(point));
// 	return 0;
// }
