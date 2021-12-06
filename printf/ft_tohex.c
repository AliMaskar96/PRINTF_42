/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:56:06 by aait-mas          #+#    #+#             */
/*   Updated: 2021/12/04 12:17:04 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_tohex(unsigned long int nb, char *to, int base, int *l)
{
	if (nb >= (unsigned long int)base)
		ft_tohex(nb / base, to, base, l);
	ft_putchar_fd(to[nb % base], 1, l);
}
