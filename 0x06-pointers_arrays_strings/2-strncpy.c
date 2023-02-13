 #include "holberton.h"

/**
* _strncpy - write a function that copys a string
* @dest: destination pointer
* @src: source pointer
* @n: input
* Return: pointer for destination
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];;
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
