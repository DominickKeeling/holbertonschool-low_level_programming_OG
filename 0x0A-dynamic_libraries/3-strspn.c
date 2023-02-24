#include "main.h"
/**
* _strspn - write a function that gets the length of a prefix substring
* @s: the sring to look into
* @accept: accepted bytes
* Return: the number of bytes in the intial segment of s which consist
* only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	unsigned int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((length > 0) && (s[i] == ' '))
			break;
		for (j = 0; accept[j] != '\0'; j++)
			if (accept[j] == s[i])
				length++;
	}
	return (length);
}
