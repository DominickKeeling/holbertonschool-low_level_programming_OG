#include "holberton.h"
/**
* leet - write a function that encodes a string int 1337
* @str: string to encode into 1337
* Return: pointer to leet string
*/
char *leet(char *str)
{
	char leet[5] = {'4', '3', '0', '7', '1'};
	char upper[5] = {'A', 'E', 'O', 'T', 'L'};
	char lower[5] = {'a', 'e', 'o', 't', 'l'};
	int i;
	int length = 0;

	while (*str != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if ((*str == upper[i]) || (*str == lower[i]))
				*str = leet[i];
		}
		length++;
		str++;
	}
	str -= length;
	return (str);
}
