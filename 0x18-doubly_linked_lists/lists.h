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
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned intindex);
int sum_dlistint(dlistint *head);
size_t print_dlistint_backward(const dlistint_t *h);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
#endif
