/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:13:46 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/07 12:41:43 by edi-iori         ###   ########lyon.fr   */
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

int	char_is_alpha_up(char c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	return (0);
}

int	char_is_alpha(char c)
{
	if (char_is_alpha_up(c) || char_is_alpha_low(c))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (!char_is_alpha(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// int main(void)
// {
// 	char source[] = "hel o";
// 	char *point = source;
//  	ft_str_is_alpha(point);
// 	printf("%d\n", ft_str_is_alpha(point));
// 	return 0;
// }