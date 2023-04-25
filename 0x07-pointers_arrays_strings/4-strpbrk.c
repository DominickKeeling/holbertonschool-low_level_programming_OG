#include "main.h"
/**
* _strpbrk - write a function that searches a string for any of a set of bytes
* @s: string to look into
* @accept: bytes to look for in string
* Return: a pointer to the byte of s
*/
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return (0);
}
