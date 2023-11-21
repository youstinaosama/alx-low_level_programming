#include "lists.h"
/**
 *  *list_len - return the list elements.
 *   *
 *    *@h: list to print
 *     *
 *      * Return: no. of elements
 */
size_t list_len(const list_t *h)
{
	size_t nel = 0;

	while (h != NULL)
	{
		nel++;
		h = h->next;
	}
	return (nel);
}
