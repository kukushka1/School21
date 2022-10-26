/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enums.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:51:11 by myuriko           #+#    #+#             */
/*   Updated: 2022/08/23 20:51:12 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENUMS_H
# define ENUMS_H

enum	e_controls;
enum	e_actions;
enum	e_pipe;
enum	e_redirects;
enum	e_direction;

enum e_controls
{
	quote			= (int)'"',
	single_quote	= (int)'\'',
	l_crnr		= (int)'<',
	r_crnr	= (int)'>',
	open_parenth	= (int)'(',
	close_parenth	= (int)')',
	escape			= (int)'\\',
	slash			= (int)'/',
	pipes			= (int)'|',
	colon			= (int)':',
	eq				= (int)'=',
	question		= (int)'?',
	dollar			= (int)'$',
	ampersand		= (int)'&',
	underscore		= (int)'_',
	space			= (int)' ',
	asterisk		= (int)'*',
	dot				= (int)'.',
	tab				= (int)'\t',
	endl			= (int)'\n',
	vtab			= (int)'\v',
	cr				= (int)'\r',
	ends			= (int)'\0',
};

enum e_actions
{
	echo			= 1,
	cd				= 2,
	pwd				= 3,
	export			= 4,
	unset			= 5,
	env_built		= 6,
	exit_built		= 7,
	execute			= 8,
};

enum e_pipes
{
	out,
	in,
};

enum e_redirects
{
	input,
	output,
	read_input,
	output_append,
};

enum e_direction
{
	single_asterisk,
	all_inn_all,
	only_start,
	only_end,
	all_end,
	start_all,
	start_all_end,
};

typedef enum e_logic
{
	and		= (int)'&',
	or		= (int)'|'
}	t_logic;

#endif
