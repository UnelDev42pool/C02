/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:23:45 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/07 19:10:00 by edi-iori         ###   ########lyon.fr   */
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

int ft_str_is_lowercase(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (!char_is_alpha_low(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// int main(void)
// {
// 	char source[] ="asd";
// 	char *point = source;
// 	printf("%d\n", ft_str_is_lowercase(point));
// 	return 0;
// }
