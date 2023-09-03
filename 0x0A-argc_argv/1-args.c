#include <stdio.h>
/**
 * main - prints the number of elements
 * @argc: no of components
 * @argv: array used
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", (argc - 1));
	(void)argv;
	return (0);
}
