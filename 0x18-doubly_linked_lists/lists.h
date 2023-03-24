#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* dlistint_s - doubly linked list
* @n: integer
* @prev: points to the previous node
* @next: points to the next node
* description: doubly linked list node structure
*/

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
}dlistint_t;

int _putchar(char c);
size_t print_dlistint(const dlistint_t *h);

#endif
