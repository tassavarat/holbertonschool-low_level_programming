#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - Returns pointer to newly allocated space which contains a string
 * @str: String to be copied
 *
 * Return: Pointer to new string identical to str, NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int len;

	if (!str)
		return (NULL);
	while (*(str + i))
		++i;
	len = i;
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	for (i = 0; i <= len; ++i)
		*(s + i) = *(str + i);
	return (s);
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

	if (!name || !owner)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = _strdup(name);
	if (!(d->name))
		return (free(d), NULL);
	d->age = age;
	d->owner = _strdup(owner);
	if (!(d->owner))
		return (free(d->name), free(d), NULL);
	return (d);
}
