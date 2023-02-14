#include "holberton.h"
/**
* cap_string - write a function that capitalizes all the words of a string
* @str: the string to capitalize
* Return: returns the string
*/
char *cap_string(char *str)
{
	int upper, count;

	int seperators[] = {32, 9, 10, 44, 59, 46, 63, 34, 40, 41, 123, 125};

	upper = -32;
	count = 0;

	if (str[count] >= 'a' && str[count] <= 'z')
		str[count] = str[count] - 32;
	count = 0;
	while (*(str + count) != '\0')
	{
		for (upper = 0; upper < 13; upper++)
		{
			if (*(str + count) == seperators[upper])
			{
				if ((*(str + (count + 1)) >= 'a') && (*(str + (count + 1)) <= 'z'))
					*(str + (count + 1)) = *(str + (count + 1)) - 32;
				break;
			}
		}

	}
	return (str);
}
