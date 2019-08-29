/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 13:49:02 by anben             #+#    #+#             */
/*   Updated: 2019/08/29 13:49:06 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *string)
{
	if (!string)
		return ;
	while (*string)
		write(1, string++, 1);
}

int	main(void)
{
	char string[] = "Hello World";

	ft_putstr(string);
	ft_putstr(": in putstr\n");
	printf("%s : in printf", string);
}
