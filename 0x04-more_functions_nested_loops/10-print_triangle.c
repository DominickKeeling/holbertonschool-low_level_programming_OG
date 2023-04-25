#include "main.h"
/**
* print_triangle - write a function that prints a triangle and \n
* size is the size of the triangle
* print new line if size is 0 or less
* @size: int to check
* Return: something
*/
void print_triangle(int size)
{
	int i;
	int j;
	int s;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= (size - i); j++)
			{
				_putchar(' ');
			}
			for (s = 1; s <= i; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
