#include "main.h"
#include <stdio.h>
/**
* main - write a program that prints the number of arguments passed to it
* @argc: number of command line arguments
* @argv: array tha contains the program command line arguments
* Return: 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
		return (0);
}
