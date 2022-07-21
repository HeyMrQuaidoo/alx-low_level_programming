#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a
 * new node at a given position.
 *
 * @head: double pointer to the head node
 * @idx: index of the node to insert
 * @n: value for new node
 *
 * Return: pointer to the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current, *temp;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *head;
		for (i = 0; i < idx - 1 && current != NULL; i++)
		{
			current = current->next;
		}
		if (current == NULL)
			return (NULL);
	}
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	temp->next = current->next;
	current->next = temp;

	return (temp);
}