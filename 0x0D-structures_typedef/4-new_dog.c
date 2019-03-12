#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Finds length of string
 * @s: String being evaluated
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		++i;
	return (i);
}
/**
 * new_dog - Creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: Created dog, NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int name_len, owner_len, i;

	d = malloc(sizeof(struct dog));
	if (!d)
		return (NULL);
	name_len = _strlen(name);
	owner_len = _strlen(owner);

	d->name = malloc(sizeof(name_len));
	if (!(d->name))
		return (NULL);
	for (i = 0; i <= name_len; ++i)
		d->name[i] = name[i];

	d->age = age;

	d->owner = malloc(sizeof(owner_len));
	if (!(d->owner))
		return (NULL);
	for (i = 0; i <= owner_len; ++i)
		d->owner[i] = name[i];
	return (d);
}
