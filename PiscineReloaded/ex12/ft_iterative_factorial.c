/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 18:56:04 by lhermann          #+#    #+#             */
/*   Updated: 2016/11/02 19:02:48 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
