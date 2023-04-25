#include "main.h"
/**
* _puts - write a functions that prints a string followed bt a new line to
* stdout
*
* @str: the variable to check
* Return: something
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
