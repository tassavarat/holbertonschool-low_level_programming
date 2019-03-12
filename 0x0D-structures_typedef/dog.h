#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Information about dogs
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* _DOG_H_ */
