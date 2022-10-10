#include "dog.h"
/**
 *init_dog -initialize struct of type dog
 *@d: pointer to struct dog
 *@name: pointer to dog's name
 *@age: dog's age
 *@owner: pointer to dog's owner
 *Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
