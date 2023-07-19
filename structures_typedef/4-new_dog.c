#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new allocated memory for dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t *dog;

  dog = malloc(sizeof(dog_t));
  if (dog == NULL)
    {
      return (NULL);
    }

  dog->name = malloc(sizeof (char) * (strlen (name) +1));
  if (dog->name == NULL)
    {
      free(dog);
      return (NULL);
    }
  dog->owner = malloc(sizeof (char) * (strlen (owner) +1));
  if (dog->owner == NULL)
    {
      free(dog->name);
      free(dog);
      return (NULL);
    }
  dog->name = strcpy (dog->name,name);
  dog->age = age;
  dog->owner = strcpy (dog->owner,owner);

  return (dog);
}
