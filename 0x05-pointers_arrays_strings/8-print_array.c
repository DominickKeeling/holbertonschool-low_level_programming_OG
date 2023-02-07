#include "main.h"
#include <stdio.h>
/**
* print_array - write a function that prints n elements of an array 
* of integers and \n
* @a: int to check
* @n: int to check
* Return: something
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", *a);
			break;
		}
		printf("%d, ", *a);
		a++;
	}
	printf("\n");
}
