/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chnaranj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:55:21 by chnaranj          #+#    #+#             */
/*   Updated: 2024/10/01 15:55:20 by chnaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t	dst_size;
	
	i = 0;
	j = 0;
	if (!dst || !src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	dst_size = ft_strlen(dst);
	if (size <= dst_size)
		return (dst_size + ft_strlen(src));
	while (i < size -1 && dst[i])
		i++;
	while (i + j < size -1 && src[j])
	{
		dst[i+j] = src[j];
		j++;
	}
	dst[i+j] = '\0';
	return (dst_size + ft_strlen(src));
}
