/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identity.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldeta <mvaldeta@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 14:58:15 by mvaldeta          #+#    #+#             */
/*   Updated: 2021/10/02 15:18:14 by mvaldeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pslib.h"

int	check_sorted_first(t_frame *frame)
{
	int	sorted;

	sorted = 0;
	if (frame->a->size == 1)
		exit(SORTED);
	frame->element = frame->a->head;
	while (frame->element)
	{
		if (frame->element->value < frame->element->next->value)
			sorted++;
		frame->element = frame->element->next;
	}
	if (sorted == frame->a->size - 1)
		exit(SORTED);
	return (0);
}

int	check_sorted_a(t_frame *frame)
{
	int	sorted;

	sorted = 0;
	if (frame->a->size == 1)
		return (SORTED);
	frame->element = frame->a->head;
	while (frame->element)
	{
		if (frame->element->value < frame->element->next->value)
			sorted++;
		frame->element = frame->element->next;
		if (frame->element == frame->a->tail)
			break ;
	}
	if (sorted == frame->a->size - 1)
		return (SORTED);
	return (0);
}

int	check_sorted_b(t_frame *frame)
{
	int	sorted;

	sorted = 0;
	if (frame->b->size == 1 || frame->b->size == 0)
		return (SORTED);
	frame->element = frame->b->head;
	while (frame->element->next != NULL)
	{
		if (frame->element->value < frame->element->next->value)
			sorted += 1;
		frame->element = frame->element->next;
	}
	if (sorted == frame->b->size - 1)
		return (SORTED);
	return (0);
}
