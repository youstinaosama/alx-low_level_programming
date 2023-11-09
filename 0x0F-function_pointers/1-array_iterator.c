#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - executes a function
 *
 *@array: array of elements
 *@size: size of the array
 *@action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
