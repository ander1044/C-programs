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
