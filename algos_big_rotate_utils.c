/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos_big_get_rot.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 17:23:17 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/06/20 17:23:17 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_ab(t_stacks *stacks, int val, int mod)
{
	if (mod == 0)
	{
		while (val > 0)
		{
			ra(stacks, 1);
			val--;
		}
		while (val < 0)
		{
			rra(stacks, 1);
			val++;
		}
	}
	else if (mod == 1)
	{
		while (val > 0)
		{
			rb(stacks, 1);
			val--;
		}
		while (val < 0)
		{
			rrb(stacks, 1);
			val++;
		}
	}
}

void	rotate_ab_nowrite(t_stacks *stacks, int val, int mod)
{
	if (mod == 0)
	{
		while (val > 0)
		{
			ra(stacks, 0);
			val--;
		}
		while (val < 0)
		{
			rra(stacks, 0);
			val++;
		}
	}
	else if (mod == 1)
	{
		while (val > 0)
		{
			rb(stacks, 0);
			val--;
		}
		while (val < 0)
		{
			rrb(stacks, 0);
			val++;
		}
	}
}

int	get_rot_a(t_stacks *stacks, int *part, int size)
{
	t_list	*tmp;
	int		i;
	int		top;
	int		bottom;

	tmp = stacks->a;
	i = 0;
	while (tmp)
	{
		if (is_in_part(tmp->cont, part, 20))
		{
			top = i;
			break ;
		}
		i++;
		tmp = tmp->next;
	}
	tmp = stacks->a;
	i = 0;
	while (tmp)
	{
		if (is_in_part(tmp->cont, part, 20))
			bottom = i;
		i++;
		tmp = tmp->next;
	}
	bottom = size - bottom;
	if (top < bottom)
		return (top);
	else
		return (-bottom);
}

int	get_rot_b_max(t_stacks *stacks, int max, int size)
{
	t_list	*tmp;
	int		i;

	tmp = stacks->b;
	i = 0;
	while (tmp)
	{
		if (tmp->cont == max)
			break ;
		i++;
		tmp = tmp->next;
	}
	if (i > size / 2)
		return (-(size - i));
	else
		return (i);
}

int	get_rot_b(t_stacks *stacks, int cont, int size)
{
	t_stacks	*tmp;
	int			i;
	int			icpy;

	tmp = stacks;
	i = 0;
	while (i < size)
	{
		if (cont > tmp->b->cont && cont < ft_lstlast(tmp->b))
			break ;
		i++;
		rb(tmp, 0);
	}
	icpy = i;
	while (icpy)
	{
		rrb(tmp, 0);
		icpy--;
	}
	if (i > size / 2)
		return (-(size - i));
	else
		return (i);
}
