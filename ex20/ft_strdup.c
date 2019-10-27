/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkraszew <kkraszew@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:31:35 by kkraszew          #+#    #+#             */
/*   Updated: 2019/10/14 16:31:36 by kkraszew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*string;

	length = 0;
	while (src[length])
		length++;
	if (!(string = (char*)malloc(sizeof(*string) * (length + 1))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		string[i] = src[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}
