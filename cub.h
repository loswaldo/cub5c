/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loswaldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 01:49:12 by loswaldo          #+#    #+#             */
/*   Updated: 2021/03/12 01:49:20 by loswaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB_H
# define CUB_H

# include <stdio.h>
# include <fcntl.h>
# include <math.h>
# include <unistd.h>

# include "config.h"
# include "for_texture_n_sprites.h"
# include "parser.h"

# include "get_next_line.h"
# include "libft.h"
# include "minilibx_mms_20200219/mlx.h"

void			error_output_n_exit(const char *str);
void			cub();

void			my_mlx_pixel_put(t_config *config, int x, int y,
								unsigned int color);
unsigned int	my_mlx_pixel_take(t_for_win *win, int x, int y);

void			output(t_config *config, int is_screenshot);
int				key_hook(int key, t_config *config);

void			screenshot(t_config *config);

#endif
