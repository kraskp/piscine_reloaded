/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkraszew <kkraszew@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:54:01 by kkraszew          #+#    #+#             */
/*   Updated: 2019/10/14 14:54:32 by kkraszew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if ((nb < 0) || (nb > 12))
	{
		return (0);
	}
	if ((nb == 0) || (nb == 1))
	{
		return (1);
	}
	else
	{
		result = nb * ft_recursive_factorial(nb - 1);
		return (result);
	}
}
