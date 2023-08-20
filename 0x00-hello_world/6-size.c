#include <stdio.h>
/**
 * main-entry point
 * return always 0
 */
int main(void)
{
	int integerType;
	float floatType;
	long int longType;
	long long int longertype;
	char charType;

	printf("Size of int: %ld bytes\n", sizeof(integerType));
	printf("Size of float: %ld bytes\n", sizeof(floatType));
	printf("Size of long int: %ld bytes\n", sizeof(longType));
	printf("size of long long int: %ld bytes\n", sizeof(longertype));
	printf("Size of char: %ld byte\n", sizeof(charType));
	return (0);
}
