/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldeta <mvaldeta@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 09:19:39 by user              #+#    #+#             */
/*   Updated: 2021/10/15 17:34:40 by mvaldeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pslib.h"

int	main(int argc, char **argv)
{
	t_frame	*frame;
	int		temp[500];
	int		i;

	if (argc < 2)
		return (1);
	frame = NULL;
	frame = init_frame(frame, argv);
	frame->a = new_stack();
	frame->b = new_stack();
	i = 1;
	while (argv[i])
	{
		frame->element = stack_append(frame->a, process(argv[i]));
		temp[INDEX] = frame->element->value;
		INDEX++;
		error_check(temp, INDEX, frame->element->value);
		frame->element = frame->element->next;
		i++;
	}
	if (check_sorted_a(frame) == SORTED)
		exit(-1);
	solver(frame);
	free(frame);
	return (0);
}
