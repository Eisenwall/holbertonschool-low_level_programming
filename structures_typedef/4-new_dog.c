#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns length of a string
 * @s: the string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * _strcpy - copies a string to a new location
 * @dest: destination
 * @src: source
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len, owner_len;

	if (!name || !owner)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	dog->name = malloc(name_len + 1);
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(owner_len + 1);
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
