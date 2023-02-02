#include "main.h"
/**
* more_numbers - write a function that prints 10 times the numbers 0 -14 w \n
*Return: something
*/
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 14; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			_putchar(j + '0');
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
