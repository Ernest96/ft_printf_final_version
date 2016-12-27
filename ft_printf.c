/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprovorn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 16:16:54 by dprovorn          #+#    #+#             */
/*   Updated: 2016/12/27 16:12:44 by ebitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_printf(const char *s, ...)
{
	va_list mylist;

	reset_bratan();
	va_start(mylist, s);
	while (s[++g_jump])
	{
		print_letter(s, &mylist);
	}
	va_end(mylist);
	return (g_cont);
}
