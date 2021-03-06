/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:22:46 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/09 09:11:43 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid(char *base)
{
	int	i;
	int	j;
	int	is_space;

	i = 0;
	while (base[i])
	{
		is_space = ((base[i] >= '\t' && base[i] <= '\r') || base[i] == ' ');
		if (base[i] == '+' || base[i] == '-' || is_space)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	position(char *base, char c)
{
	int	i;

	if (!c)
		return (-1);
	i = 0;
	while (base[i] && base[i] != c)
		i++;
	if (base[i])
		return (i);
	else
		return (-1);
}

char	*get_sign(int *sign, char *str)
{
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*sign *= -1;
		str++;
	}
	return (str);
}

int	ft_atoi_base(char *str, char *base, int len)
{
	int		sign;
	int		res;
	char	c;

	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	sign = -1;
	str = get_sign(&sign, str);
	res = 0;
	while (1)
	{
		c = position(base, *str);
		if (c < 0)
			break ;
		res *= len;
		res -= c;
		str++;
	}
	return (res * sign);
}
