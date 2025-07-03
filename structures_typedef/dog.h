#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for a dog
 * @name: pointer to dog's name (string)
 * @age: dog's age (float)
 * @owner: pointer to dog's owner name (string)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
