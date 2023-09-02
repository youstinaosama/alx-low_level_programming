#include  <stdlib.h>
#include  "main.h"
#include <stdio.h>
#include <time.h>
/**
 *  *  * main - assigns a random number to int n everytime
 *   *   * it executes, and prints it
 *    *    * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	i=0;
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i == 0)
		printf("%d is zero\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
}
