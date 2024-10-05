/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:29:19 by chnaranj          #+#    #+#             */
/*   Updated: 2024/10/05 17:35:47 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t len);
size_t	ft_strlen(const char *s);
int		ft_toupper(int c);
char	*ft_strrchr(const char *s, int c);

#endif
