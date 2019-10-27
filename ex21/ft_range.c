/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkraszew <kkraszew@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:51:21 by kkraszew          #+#    #+#             */
/*   Updated: 2019/10/14 16:51:22 by kkraszew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*res;
	int		i;
	long	size;

	size = (max - min);
	if (min >= max)
		return (NULL);
	res = (int*)malloc(sizeof(*res) * (size));
	i = 0;
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}
