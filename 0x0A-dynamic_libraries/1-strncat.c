#include "main.h"
/**
* _strncat - write a function that concatenates two strings
* @dest: pointer to the destination string
* @src: pointer to the source sting
* @n: an integer to check
* Return: pointer to destination string
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int j = 0;

	while (*(dest + dest_length) != '\0')
	{
		dest_length++;
	}
	for (j = 0; j < n && *(src + j) != '\0'; j++)
	{
		*(dest + dest_length) = *(src + j);
		dest_length++;
	}
	*(dest + dest_length) = '\0';

	return (dest);
}
