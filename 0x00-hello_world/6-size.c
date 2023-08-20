#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int integerType;
	float floatType;
	long int longType;
	long long int longertype;
	char charType;

	printf("Size of an int: %ld bytes\n", sizeof(integerType));
	printf("Size of a float: %ld bytes\n", sizeof(floatType));
	printf("Size of a long int: %ld bytes\n", sizeof(longType));
	printf("size of a long long int: %ld bytes\n", sizeof(longertype));
	printf("Size of a char: %ld byte\n", sizeof(charType));
	return (0);
}
