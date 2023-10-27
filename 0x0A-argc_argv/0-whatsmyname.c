#include <stdio.h>
/**
 *main - prints the name
 *
 *@argc: no. of arguments
 *@argv: array of arguments
 *
 * Return: always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
