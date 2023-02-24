#include "main.h"
/**
* _strchr - write a function that locates a character in a string
* @s: string to check
* @c: character to look for
* Return: a pointer to the first occurence of the characer c in s or NULL
* if the character is not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
		if (*s == c)
			return (s);
	}
	return (0);
}
