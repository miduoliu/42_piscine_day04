/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_fatorial.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 12:15:41 by miliu             #+#    #+#             */
/*   Updated: 2019/07/13 22:09:11 by miliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	if (nb >= 1)
	{
		if (nb == 1)
		{
			return (1);
		}
		else
		{
			return (nb * ft_iterative_factorial(nb - 1));
		}
	}
}
