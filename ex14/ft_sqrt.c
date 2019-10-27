/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkraszew <kkraszew@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 15:53:52 by kkraszew          #+#    #+#             */
/*   Updated: 2019/10/14 18:34:11 by kkraszew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 0;
	if (nb > 2147395601)
		return (0);
	while (sqrt * sqrt < nb)
		sqrt++;
	if (sqrt * sqrt == nb)
		return (sqrt);
	else
		return (0);
}
