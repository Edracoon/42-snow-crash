#include <stdio.h>
#include <stdlib.h>

void	rotate(char cipher[])
{
	int i = 0;
	while (cipher[i])
	{
		if (cipher[i] - 15 >= 'a')
			cipher[i] = cipher[i] - 15;
		else
			cipher[i] = cipher[i] + 11;
		i++;
	}
}

int	main(void)
{
	char	cipher[] = "cdiiddwpgswtgt";

	rotate(cipher);

	printf("decrypted: \"%s\"\n", cipher);
}