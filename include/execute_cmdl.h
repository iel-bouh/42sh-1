/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_cmdl.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hastid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 05:18:12 by hastid            #+#    #+#             */
/*   Updated: 2020/02/06 03:09:50 by hastid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXECUTE_CMDL_H
# define EXECUTE_CMDL_H

# include "shell.h"
# include "struct_shell.h"

int		add_pipes(t_pipe **pipes);
void	free_pipes(t_pipe *pipes);

int		execute_cmdline(char *line);

#endif