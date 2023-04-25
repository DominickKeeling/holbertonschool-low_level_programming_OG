#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - write a function that allocates memory using malloc
* @b: unsigned integer
* Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
