#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - function adds a new node at end of list_t
 * @head: head to list
 * @str: pointer to string.
 * Return: address to list node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *last = *head;
	int len = 0;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->str = strdup(str);

	if (tmp->str == NULL)
	{
		free(tmp);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;
	tmp->len = len;
	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = tmp;
	tmp->next = NULL;
	return (tmp);
}
