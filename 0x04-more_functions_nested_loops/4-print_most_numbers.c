#include "main.h"
/**
 * print_most_numbers - write a function that prints the numbers 0 to 9 with \n
 * do not print 2 and 4
 * Return: something
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
