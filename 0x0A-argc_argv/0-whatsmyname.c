#include <stdio.h>
#include "main.h"

/**
* main - write a program that prints it name with \n
* @argc: number of command line arguments
* @argv: array of programs
* Return: 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
		return (0);
}
