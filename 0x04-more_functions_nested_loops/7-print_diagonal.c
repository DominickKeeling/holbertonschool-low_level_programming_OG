#include "main.h"
/**
* print_diagonal - Write a function that draws a diagonal line on the terminal.
* Where n is the number of times the character \ should be printed
* The diagonal should end with a \n
* If n is 0 or less, the function should only print a \n
* @n: character to be checked
* Return: something
*/
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i >= n; i++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
