#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *array_range - create an array of integers.
 *
 *@min: min to allocate in the memory
 *@max:max to allocate in the memory
 *
 *Return: arr.
 */
int *array_range(int min, int max)
{
	int *arr;
	int a, i;

	if (max < min)
		return (NULL);
	a = max - min;
	arr = (int *) malloc((a + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= a; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
