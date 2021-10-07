/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:28:34 by eaouassa          #+#    #+#             */
/*   Updated: 2021/09/29 11:54:45 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{		
		if (!((*str >= '0') && (*str <= '9')))
			return (0);
		 str++;
	}
	return (1);
}
