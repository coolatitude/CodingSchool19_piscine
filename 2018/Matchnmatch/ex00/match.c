/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanderl <pvanderl@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 20:45:36 by pvanderl          #+#    #+#             */
/*   Updated: 2018/08/19 21:53:24 by pvanderl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s1 == '\0' && *s2 == '*')
		return (nmatch(s1, s2 + 1));
	if (*s2 == '*')
		return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	if (*s2 == *s1)
		return (nmatch(s1 + 1, s2 + 1));
	if (*s2 != *s1)
		return (0);
	return (1);
}

int		match(char *s1, char *s2)
{
	return (nmatch(s1, s2) > 0);
}