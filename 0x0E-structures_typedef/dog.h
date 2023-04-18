#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defined a new type "dog_t" using the typedef statement.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
