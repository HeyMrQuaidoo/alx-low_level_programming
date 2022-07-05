#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog
 * @name: dog name
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n, l, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	n = l = 0;
	while (name[n++])
		;
	while (owner[l++])
		;
	dog->name = malloc(n * sizeof(dog->name));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= n; i++)
		dog->name[i] = name[i];
	dog->age = age;
	dog->owner = malloc(l * sizeof(dog->owner));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= l; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
