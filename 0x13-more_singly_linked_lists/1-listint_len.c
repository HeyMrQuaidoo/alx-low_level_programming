#include "lists.h"

/**
 * listint_len - elements in a linked listint_t list.
 * @h: pointer to linked list
 *  * Return: number of elements in linked list
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != 0)
	{
		node++;
		h = h->next;
	}

	return (node);
}
