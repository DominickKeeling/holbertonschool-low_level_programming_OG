#include <stdio.h>
#include "main.h"
/**
* main - found below
* Write a program that prints numbers from 1 to 100, followed by a new line
* But for multiple of three print Fizz in* stead of the number and for the
* multiples of five print Buzz.
* For number which are multiples of both three and five print FizzBuzz.
* Each number or word should be separated by a space
*
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			if (i != 100)
				printf(" ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	if (i == 100)
	printf("\n");
	}
	return (0);
}
