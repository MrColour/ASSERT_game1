/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entry.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 04:02:00 by kmira             #+#    #+#             */
/*   Updated: 2019/08/03 02:42:44 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "default.h"

WINDOW	*init_setup(void)
{
	WINDOW *window;

	if (initscr() == OK)
	{
		cbreak();
		noecho();
		start_color();
		curs_set(0);
	}

	window = newwin(WIN_ROWS, WIN_COLS, 0, 0);

	nodelay(window, true);
	box(window, 0, 0);
	wrefresh(window);

	return (window);
}

int		main(void)
{
	int	scene;
	WINDOW *win;

	scene = TRANSITION_SCENE;

	endwin();
	return (1);
}
