#include "main.h"
/**
* _memset - write a function that fills memory with a constant byte
* @s: a pointer to an area of memory where the operation will happen
* @b: constant byte
* @n: number of bytes to set to b
* Return: memory area pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
