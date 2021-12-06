/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:50:26 by aait-mas          #+#    #+#             */
/*   Updated: 2021/12/04 12:16:21 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putchar_fd(char c, int fd, int *l);
void	ft_putnbr_fd(long long n, int fd, int *l);
void	ft_putstr_fd(char *s, int fd, int *l);
void	ft_tohex(unsigned long int nb, char *to, int base, int *l);
int		ft_printf(const char *str, ...);

#endif
