#include "main.h"
/**
* _puts_recursion - write a function that prints a string \n
* @s: character to check
* Return: 0
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
