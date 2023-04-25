#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - write a function that concatenates two strings
* @s1: pointer to string 1
* @s2: pointer to strind 2
* @n: integer
* Return: pointer to new string
* If the function fails return NULL
* if n is greater or equal to the length of s2 then use the entire string s2
* If NULL is passed, treat it as an empty string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *Poop;
	unsigned int i, j, lens1, lens2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lens1 = strlen(s1);
	lens2 = strlen(s2);
	if (n >= lens2)
		n = lens2;
	Poop = malloc(sizeof(char) * (lens1 + n + 1));
	if (Poop == NULL)
		return (NULL);

	for (i = 0; i < lens1; i++)
		Poop[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		Poop[i + j] = s2[j];
	}
	Poop[i + j] = '\0';
	return (Poop);
}
