#include "main.h"
/**
* _strlen - write a function that returns the length of a string
*
* @s: the variable to check
*
* Return: something
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return len;
}
