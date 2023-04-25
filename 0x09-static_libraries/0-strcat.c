#include "main.h"
/**
* *_strcat - Write a function that concatenates two strings
* @dest: destination
* @src: source
* Return: dest string
*/
char *_strcat(char *dest, char *src)
{
	int j = 0;
	int i = 0;

	while (*(dest + j) != '\0')
	{
		j++;
	}
	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + j) = *(src + i);
		j++;
	}
	*(dest + j) = *(src + i);
	return (dest);
}
