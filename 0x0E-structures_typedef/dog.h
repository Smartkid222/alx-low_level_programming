#ifndef DOG_H
#define DOG_H

/**
 * struct dog - function that define a new type
 * @name: element 1
 * @age: element 2
 * @owner: element 3
 * Return: 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
