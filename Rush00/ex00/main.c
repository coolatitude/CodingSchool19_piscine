/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 11:52:10 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/12 21:46:37 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.c"

int	main(void)
{
	write(1, "rush 5-3\n", 10);
	rush(5, 3);
	write(1, "\nrush 5-1\n", 12);
	rush(5, 1);
	write(1, "\nrush 1-1\n", 12);
	rush(1, 1);
	write(1, "\nrush 1-5\n", 12);
	rush(1, 5);
	write(1, "\nrush 4-4\n", 12);
	rush(4, 4);
	return (0);
}
