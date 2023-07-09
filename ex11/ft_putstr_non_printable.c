/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:14:43 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/09 15:40:36 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hexa(int c, int first_time)
{
	const char	backslash = '\\';
	const char	zero = '0';

	if (c <= 16)
	{
		if (first_time)
		{
			write(1, &backslash, 1);
			write(1, &zero, 1);
		}
		if (c <= 9)
		{
			c += 48;
			write(1, &c, 1);
		}
		else
		{
			c += 87;
			write(1, &c, 1);
		}
	}
	else
	{
		write(1, &backslash, 1);
		print_hexa(c / 16, 0);
		print_hexa(c % 16, 0);
	}
}

int	char_is_printable(char c)
{
	if (c <= ' ' || c >= '~')
	{
		return (1);
	}
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!char_is_printable(str[i]) || str[i] == ' ')
		{
			write(1, &str[i], 1);
		}
		else
		{
			print_hexa(str[i], 1);
		}
		i++;
	}
}
// int main(void)
// {
// 	char source[] ="Coucou\x1Ftu vas bien ?";
// 	char *point = source;
// 	ft_putstr_non_printable(point);
// 	return 0;
// }
