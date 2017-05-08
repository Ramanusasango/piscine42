/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aezzeddi <aezzeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 00:34:46 by aezzeddi          #+#    #+#             */
/*   Updated: 2017/04/16 01:27:16 by aezzeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	match(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	else if (*s1 == *s2 && *s1 != '*')
		return (match(s1 + 1, s2 + 1));
	else if (*s2 == '*' && !*s1)
		return (match(s1, s2 + 1));
	else if (*s2 == '*' && *s1)
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	return (0);
}
