/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:24:36 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/07 19:13:12 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	char_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_numeric(str[i]) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// int main(void)
// {
// 	char source[] = "42";
// 	char *point = source;
// 	printf("%d\n", ft_str_is_numeric(point));
// 	return 0;
// }
