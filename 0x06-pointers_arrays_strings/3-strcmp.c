#include "holberton.h"
/**
* _strcmp - write a function that compares two strings
* @s1: a element to compare
* @s2: a element to compare
* Return: 0 if equal
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}
