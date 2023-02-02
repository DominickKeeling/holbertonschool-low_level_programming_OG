#include "main.h"
/**
* print_line - write a function that draws a straight line in the terminal
* where n is the number of times the character _ should be printed
* end with a new line
* If n is 0 or less, the function should only print \n
* @n: the character to be checked
* Return: something
*/
void print_line(int n)
{

	n = '_';
	while ('_' >= 0)
	{
		_putchar(n + 48);
		_putchar(n + 50);
		_putchar(n + 58);
		_putchar(n - 52);
		_putchar(n + 48);
		_putchar('\n');
	}
}
