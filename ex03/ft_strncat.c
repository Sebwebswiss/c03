/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szunec <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:34:46 by szunec            #+#    #+#             */
/*   Updated: 2022/06/19 18:34:50 by szunec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *s1, char *s2, unsigned int number)
{
	unsigned int	i_first;
	unsigned int	i_second;

	i_first = 0;
	i_second = 0;
	while (s1[i_first] != '\0')
		i_first++;
	while (s2[i_second] != '\0' && i_second < number)
	{
		s1[i_first] = s2[i_second];
		i_first++;
		i_second++;
	}
	s1[i_first] = '\0';
	return (s1);
}
