#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: name to initilaize
 * @age: age to initilaize
 * @owner: owner to initilaize
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
