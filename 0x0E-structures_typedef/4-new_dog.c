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
	dog_t *new;

	new = malloc(sizeof(dog_t));

	if (new == NULL)
	{
		return (NULL);
	}
	(*new).name = malloc(sizeof(name));

	if ((*new).name == NULL)
	{
		return (NULL);
	}

	_strcpy((*new).name, name);

	(*new).age = malloc(sizeof(age));

	(*new).owner = malloc(sizeof(owner));
	if ((*new).owner == NULL)
	{
		return (NULL);
	}

	_strcpy((*new).owner, owner);

	return (new);
}
