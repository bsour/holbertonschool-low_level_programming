#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if fails
 */
int _strlen(char *s);
char *_strcpy(char *dest, char *src);


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name;
	char *new_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_name, name);
	_strcpy(new_owner, owner);

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);

}
/**
 * _strlen - calculates the length of a string
 * @s: the string to calculate the length of
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
    int len = 0;

    while (*s++)
    {
        len++;
    }

    return (len);
}

/**
 * _strcpy - copies a string from src to dest
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    char *dest_start = dest;

    while (*src)
    {
        *dest++ = *src++;
    }

    *dest = '\0';

    return (dest_start);
}
