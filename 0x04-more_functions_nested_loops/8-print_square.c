#include "main.h"
/**
* print_square - write a function that prints a square with \n
* where size is the size of the square
* if size is 0 or less the function should only print a new line
* use the # to print the square
* @size: the integer to check
* Return: something
*/
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			if (i == size)
			_putchar('\n');
		}
	}
	_putchar('\n');
}
