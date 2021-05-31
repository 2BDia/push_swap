/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 16:33:49 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/05/31 13:53:13 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void	printlst(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%d\n", lst->cont);
// 		lst = lst->next;
// 	}
// 	printf("\n");
// }

int	main(int argc, char	**argv)
{
	t_stacks	*stacks;
	char		*line;
	(void)argc;

	stacks = setstacks(argv);
	while (get_next_line(0, &line))
	{
		printf("line=%s\n", line);
		free(line);
	}
	// printlst(stacks->a); //to remove
	// printlst(stacks->b); //to remove
	// A faire : loop pour read comme dans gnl (buffer de 1), puis en fonction de ce que c'est juste faire l'opération sur les stacks
	if (stacks->a)
		ft_lstclear(&stacks->a);
	if (stacks->b)
		ft_lstclear(&stacks->b);
	free(stacks);
	system("leaks checker");
	return (0);
}
