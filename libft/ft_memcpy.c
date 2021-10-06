/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:34:23 by lloko             #+#    #+#             */
/*   Updated: 2021/10/06 19:44:45 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;

	i = 0;
	char* d = (char*) dst;
	const char* s = ( const char*) src;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

#include <stdio.h>
int main()
{
	unsigned char d[] = "llll";
	unsigned char s[] = "rrrr";
	size_t i = 2;
	printf("%s\n", ft_memcpy(*d, *s, i));
}
