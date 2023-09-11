#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to the dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nnew_dog;
	nnew_dog = malloc(sizeof(dog_t));
	if (nnew_dog == NULL)
		return (NULL);
	nnew_dog->name = name;
	nnew_dog->age = age;
	nnew_dog->owner = owner;

	return (nnew_dog);
}
