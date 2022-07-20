#include "lists.h"

/**
 * listint_len - elements in a linked listint_t list
 * @h: pointer to linked list
<<<<<<< HEAD
 *  * Return: number of elements in linked list
 *
=======
 *
 * Return: number of elements in linked list
>>>>>>> abb509603fd946458598b4acccb2d3c71c53b6ce
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != 0)
	{
		node++;
		h = h->next;
	}
<<<<<<< HEAD

=======
>>>>>>> abb509603fd946458598b4acccb2d3c71c53b6ce
	return (node);
}
