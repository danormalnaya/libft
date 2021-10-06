/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:31:40 by lloko             #+#    #+#             */
/*   Updated: 2021/10/06 14:41:47 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main ()
{
	unsigned char str[] = "rgldld";
	printf("%s\n", ft_memset(str, '2', 10));
	printf("%s\n", ft_memset(str, '2', 6));
	printf("%s\n", ft_memset(str, '1', 4));
	printf("%s\n", ft_memset(str, '9', 1));
	return (0);
}