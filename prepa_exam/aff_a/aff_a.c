/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:22:18 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/12 14:31:31 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int main(int ac, char **av)
{
	if(ac == 2)
	{
		int i = 0;
		while(av[1][i])
		{
			if(av[1][i] == 'a')
			{
				write(1, "a", 1);
				break;
			}
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		write(1, "a\n", 2);
		return (0);
	}
}
