#include "holberton.h"
/**
* reverse_array - write a function that reverses the content of an array
* of integers
* @a: pointer to integer a
* @n: elements of the array
* Return: 0
*/
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = tmp;
	}
}
