#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Information about dogs
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* _DOG_H_ */
