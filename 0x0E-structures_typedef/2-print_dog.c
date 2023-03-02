#include "dog.h"
#include <stdlib.h>
/**
* print_dog - write a function that prints a struct dog
* if an element of d os NULL, print (nil) instead of this element
* (if name is NULL, print Name: (nil))
* @d: pointer to the struct dog
* Return: nothing
*
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
