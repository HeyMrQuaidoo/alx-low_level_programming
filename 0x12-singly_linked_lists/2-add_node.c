#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - return length of a string
 * @str: string
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
/**
 * add_node - function that adds a new node at the
 * beginning of a list_t list
 * @head: head to a  linked list
 * @str: str new node
 *
 * Return: address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	if (str == NULL)
		return (NULL);
	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->str = strdup(str);
	if (tmp->str == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->len = _strlen(tmp->str);
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
