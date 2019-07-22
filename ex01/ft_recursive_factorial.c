/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miliu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 22:10:52 by miliu             #+#    #+#             */
/*   Updated: 2019/07/13 22:23:32 by miliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int result;
	int next_result;

	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	result = ft_recursive_factorial(nb - 1);
	next_result = result * nb;
	if (next_result / nb != result)
	{
		return (0);
	}
	return (next_result);
}
