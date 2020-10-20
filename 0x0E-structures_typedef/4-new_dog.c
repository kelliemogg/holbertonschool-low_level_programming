#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - counts the number of characters in a string
 * @s: This is a pointer to a string
 * Return: length of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}


/**
 * _strcpy - copies a string to another pointer
 * @dest: copying to this pointer
 * @src: input string
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int count = _strlen(src);

	for (i = 0; i <= count; i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * new_dog - new dog
 * description: create a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		return (NULL);
	}

	my_dog->name = malloc(sizeof(name));

	if (my_dog->name == NULL)
	{
		return (NULL);
	}

	strcpy(my_dog->name, name);

	my_dog->age = age;

	my_dog->owner = malloc(sizeof(owner));
	if (my_dog->owner == NULL)
	{
		return (NULL);
	}

	_strcpy(my_dog->owner, owner);

	return (my_dog);
}
