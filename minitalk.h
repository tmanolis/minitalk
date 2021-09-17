/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:41:26 by tmanolis          #+#    #+#             */
/*   Updated: 2021/09/17 15:19:49 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>
# include <signal.h> 

# ifdef __MACH__
#  define TIME 1000
# elif __APPLE__
#	define TIME 1000
# elif __linux__
#  define TIME 400
# endif

size_t	ft_strlen(const char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	putnb_base(unsigned long int nb, char *base);
int		ft_isdigit(int c);
int		ft_atoi(const char *str);
pid_t	getpid(void);

#endif