#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *@argc: no of elements
 *@argv: array
 *
 *Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i;
	int mul = 1;

	if (argc < 3)
		printf("Error\n");
	else
	{	
		for (i = 0; i < argc; i++)
			mul = mul * atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
