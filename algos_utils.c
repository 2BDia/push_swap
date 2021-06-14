/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 13:13:37 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/06/11 13:15:22 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_in_part(int cont, int *part, int partsize)
{
	int	i;

	i = 0;
	while (i < partsize)
	{
		if (cont == part[i])
			return (1);
		i++;
	}
	return (0);
}

int	end_big_algs(t_stacks *stacks, int *tab, int j, int size)
{
	while (ft_lstsize(stacks->a) <= size && ft_lstsize(stacks->a) > 3)
	{
		if (stacks->a->cont == tab[j])
		{
			j++;
			pb(stacks, 1);
		}
		else
			ra(stacks, 1);
		if (ft_lstsize(stacks->a) == 3)
		{
			alg3(stacks);
			return (1);	
		}
	}
	return (0);
}