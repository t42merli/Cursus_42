/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerli <tmerli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 05:57:26 by tmerli            #+#    #+#             */
/*   Updated: 2018/02/15 04:51:17 by tmerli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	next_two(t_stack *stack, int *tab)
{
	int		next_two;
	t_stack	*tmp;

	tmp = stack;
	next_two = stack->nb;
	stack = stack->next;
	while (stack)
	{
		if (stack->nb < next_two)
			next_two = stack->nb;
		stack = stack->next;
	}
	tab[0] = next_two;
	next_two = (tmp->nb > tab[0]) ? tmp->nb : tmp->next->nb;
	tmp = tmp->next;
	while (tmp)
	{
		if (tmp->nb < next_two && tmp->nb > tab[0])
			next_two = tmp->nb;
		tmp = tmp->next;
	}
	tab[1] = next_two;
}

void	setup(t_stack *a, int *next)
{
	if (a && a->next)
		next_two(a, next);
	if (stack_size(a) == 3)
	{
		if (a->nb == biggest(a))
		{
			rotate(&a);
			ft_putendl("ra");
		}
		else if (last(a) == smallest(a))
		{
			reverse_rotate(&a);
			ft_putendl("rra");
		}
		if (a->nb > a->next->nb)
		{
			swap(&a);
			ft_putendl("sa");
		}
	}
}

void	push_back(t_stack *a, t_stack *b)
{
	if (a && a->next && a->nb > a->next->nb)
	{
		swap(&a);
		ft_putendl("sa");
	}
	while (b)
	{
		push(&b, &a);
		ft_putendl("pa");
		if (a->nb > a->next->nb)
		{
			swap(&a);
			ft_putendl("sa");
		}
	}
}

void	small_sort(t_stack *a, t_stack *b)
{
	int next[2];

	setup(a, next);
	while (a && a->next && a->next->next && !sorted(a))
	{
		if (a->nb == next[0] || a->nb == next[1])
		{
			push(&a, &b);
			ft_putendl("pb");
			if (b->nb == next[0] && a->next)
				next_two(a, next);
			if (b->next && b->next->nb > b->nb)
			{
				swap(&b);
				ft_putendl("sb");
			}
		}
		else
		{
			rotate(&a);
			ft_putendl("ra");
		}
	}
	push_back(a, b);
}
