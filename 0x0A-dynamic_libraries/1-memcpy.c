#include "main.h"
/**
* _memcpy - write a function that copies memory area
* @dest: destination pointer
* @src: constant byte
* @n: number of bytes
* Return: pointer to destination string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
