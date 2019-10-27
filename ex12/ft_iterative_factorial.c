/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkraszew <kkraszew@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:42:05 by kkraszew          #+#    #+#             */
/*   Updated: 2019/10/14 14:49:27 by kkraszew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	i = 2;
	result = 1;
	while (i <= nb)
	{
		result = (result * i);
		++i;
	}
	return (result);
}
