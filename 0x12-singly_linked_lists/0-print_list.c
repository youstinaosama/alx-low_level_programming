#include "lists.h"
/**
 *print_list - prints the list elements.
 *
 *@h: list to print
 *
 * Return: no. of elements
 */
size_t print_list(const list_t *h)
{
	size_t nel = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nel++;
	}
	return (nel);
}
