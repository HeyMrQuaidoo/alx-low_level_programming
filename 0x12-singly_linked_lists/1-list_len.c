#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 * @h: pointer in a linked list
 *
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int i;

	temp = h;
	for (i = 0; temp != NULL; i++)
	{
		temp = temp->next;
	}
	return (i);
}
