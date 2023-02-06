#include "main.h"
/**
* swap_int - write a function that swaps the value of two integers
* @b: a variable to check
* @a: a variable to check
* Return: something
*/
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
