/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 09:51:58 by msariasl          #+#    #+#             */
/*   Updated: 2023/01/20 10:58:33 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
// gcc -g filename
// lldb a.out
// b main
// run
// gui
// s ->
// 3 esc to exit

int main(int argc, char **argv)
{
	if (argc == 2 && argv++ != 0)
	{
		while (**argv != 0 && **argv != ' ' && **argv != '	')
			write(1, &(*((*argv)++)), 1);
		write(1, "\n", 1);
	} else write(1,"\n",1);
}