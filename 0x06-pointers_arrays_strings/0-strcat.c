#include "holberton.h"
/**
* *_strcat - Write a function that concatenates two strings
* @dest: destination
* @src: source
* Return: dest string
*/
char *_strcat(char *dest, char *src)
{
	int j;
	int i;

	for (j = 0; dest[j] != '\0'; j++)

	for (i = 0; src[i] != '\0'; i++)
		dest[j + i] = src[i];
	dest[j + i] = '\0';
	return (dest);
}
