/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:17:18 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/05/26 16:17:27 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stacks *stacks)
{
	t_list	*tmp;

	tmp = stacks->b;
	stacks->b = stacks->b->next;
	tmp->next = stacks->a;
	stacks->a = tmp;
}

void	pb(t_stacks *stacks)
{
	t_list	*tmp;

	tmp = stacks->a;
	stacks->a = stacks->a->next;
	tmp->next = stacks->b;
	stacks->b = tmp;
}
