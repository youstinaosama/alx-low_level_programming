#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *listint_len - count list elements
 *
 *@h: list
 *
 *Return: no. of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t por = 0;

	while (h != NULL)
	{
		por++;
		h = h->next;
	}
	return (por);
}
