/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 01:50:42 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/14 17:11:14 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	char x;

	x = ' ';
	while (x != '\0')
	{
		ft_putchar(*str);
		x = *(++str);
	}
}
