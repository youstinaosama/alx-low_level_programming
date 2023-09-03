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
	int sum;

	if (argc == 1)
		printf("%i\n", 0);
	else if (argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
			sum = sum + atoi(argv[i]);
		printf("%d\n", sum);
	}
	return (0);
}
