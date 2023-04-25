#include "main.h"
/**
 * print_numbers - write a function that prints the numbers, from 0 to 9 \n
 *
 * Return: something
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
