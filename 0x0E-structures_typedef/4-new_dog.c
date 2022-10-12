#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 * Return: new dog pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, na, ow;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (na = 0; name[na]; na++)
		;
	na++;
	dog->name = malloc(na * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < na; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (ow = 0; owner[ow]; ow++)
		;
	ow++;
	dog->owner = malloc(ow * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ow; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
