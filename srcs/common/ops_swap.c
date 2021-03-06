/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldeta <mvaldeta@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 10:11:10 by mvaldeta          #+#    #+#             */
/*   Updated: 2021/10/02 15:25:35 by mvaldeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pslib.h"

int	do_sa(t_stack_info *label)
{
	t_stack_link	*new_head;

	new_head = label->head->next;
	new_head->prev = NULL;
	label->head->prev = new_head;
	label->head->next = label->head->next->next;
	new_head->next = label->head;
	label->head = new_head;
	write(1, "sa\n", 3);
	return (0);
}

int	do_sb(t_stack_info *label)
{
	t_stack_link	*new_head;

	if (label->size == 1)
		return (0);
	new_head = label->head->next;
	new_head->prev = NULL;
	label->head->prev = new_head;
	label->head->next = label->head->next->next;
	new_head->next = label->head;
	label->head = new_head;
	write(1, "sb\n", 3);
	return (0);
}

int	do_ss(t_stack_info *label)
{
	do_sa(label);
	do_sb(label);
	write(1, "ss\n", 3);
	return (0);
}
