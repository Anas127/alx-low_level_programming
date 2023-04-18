#include "dog.h"
#include <stdlib.h>

/**
 * strlen - length of str
 * @string: param
 * Return: length of string
 */

int strlength(const char *string)
{
	int l;

	l = 0;
	while (*string++)
		l++;
	return (l);
}
/**
 * *strcpy - copy from src to dest
 * @dest: param
 * @src: param
 * Return: ptr
 */

char *strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * *new_dog - creates a dog
 * @name: param
 * @age: param
 * @owner: param
 * Return: null if failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	dog->name = malloc(sizeof(char) * (strlength(name) + 1));
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (strlength(owner) + 1));
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = strcopy(dog->name, name);
	dog->age = age;
	dog->owner = strcopy(dog->owner, owner);
	return (dog);
}
