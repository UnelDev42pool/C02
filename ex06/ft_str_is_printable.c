/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 22:26:49 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/08 21:08:04 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	char_is_printable(char c)
{
	if (c < ' ' || c > '~')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_printable(str[i]) == 1)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// #include <stdio.h>
// int main(void)
// {
// 	char source[] ="asd f~gh";
// 	char *point = source;
// 	printf("%d\n", ft_str_is_printable(point));
// 	return 0;
// }
