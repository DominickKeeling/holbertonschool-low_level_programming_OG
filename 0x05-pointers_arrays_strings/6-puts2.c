#include "main.h"
/**
* puts2 -write a function that prints every other character of a string
* starting with the first character followed by a \n
* @str: the srting to be checked
* Return: something
*/
void puts2(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
}
