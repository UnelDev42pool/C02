/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:11:09 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/07 19:14:22 by edi-iori         ###   ########lyon.fr   */
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

int	ft_str_is_uppercase(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (!char_is_alpha_up(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// int main(void)
// {
// 	char source[] ="DFG";
// 	char *point = source;
// 	printf("%d\n", ft_str_is_uppercase(point));
// 	return 0;
// }
