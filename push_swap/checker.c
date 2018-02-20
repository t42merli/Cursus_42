/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerli <tmerli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 14:57:24 by tmerli            #+#    #+#             */
/*   Updated: 2018/02/05 15:15:11 by tmerli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_sort(t_stack *stacka, int size)
{
	t_stack		*stackb;
	char		*line;
	int			error;

	error = 0;
	stackb = NULL;
	while (get_next_line(0, &line))
	{
		if (!(move_stack(line, &stacka, &stackb)))
		{
			ft_putendl("Error");
			error = 1;
			break ;
		}
		free(line);
	}
	free(line);
	if (!error && checksort(stacka, stackb))
		ft_putendl("OK");
	else if (!error)
		ft_putendl("KO");
	if (stacka)
		free_stack(stacka);
	if (stackb)
		free_stack(stackb);
}

int		main(int argc, char *argv[])
{
	t_stack *stack;

	stack = NULL;
	if (argc >= 2)
	{
		if (!(stack = get_stack(argc, argv)))
			return (0);
	}
	else
	{
		ft_putendl("usage");
		return (0);
	}
	do_sort(stack, argc);
	return (0);
}
