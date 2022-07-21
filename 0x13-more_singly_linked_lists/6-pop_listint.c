#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint -  function that returns the nth node
 * of a listint_t linked list.
 *
 * @head: double pointer to the beginning of the list
 *
 * Return: the head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);

	return (n);
}
