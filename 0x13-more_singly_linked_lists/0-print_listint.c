#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_listint - print list elements
 *
 *@h: list to print
 *
 *Return: no. of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t por = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		por++;
		h = h->next;
	}
	return (por);
}
