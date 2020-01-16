/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 22:01:27 by epuclla           #+#    #+#             */
/*   Updated: 2020/01/14 23:47:02 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	char *result;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[i])
			result[i] = to_find[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

int main (void)
{
	char str[] = "Homacito";
	char to_find[] = "Thoma";
	char *result;

	result = ft_strstr(str, to_find);
	printf("%s", result);
	return (0);
}
