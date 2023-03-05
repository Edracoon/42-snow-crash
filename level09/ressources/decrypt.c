#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac < 2)
		return (0);

	int i = 0;
	while (i < strlen(av[1]))
		av[1][i] -= i++;	// Substract the the value of the index to the current char

	printf("token: \'%s\'\n", av[1]);
	return (0);
}