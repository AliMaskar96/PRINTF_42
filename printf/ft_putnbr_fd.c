/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:50:44 by aait-mas          #+#    #+#             */
/*   Updated: 2021/12/04 14:45:35 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(long long n, int fd, int *l)
{
	unsigned long	nm;

	if (n < 0)
	{
		ft_putchar_fd('-', fd, l);
		n = n * -1;
	}
	nm = n;
	if (nm >= 10)
		ft_putnbr_fd(nm / 10, fd, l);
	ft_putchar_fd(nm % 10 + 48, fd, l);
}
