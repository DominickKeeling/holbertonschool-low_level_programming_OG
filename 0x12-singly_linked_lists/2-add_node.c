#include "lists.h"
/**
* add_node - write a function that adds a new node at the beginning
* of a list_t list
* str needs to be duplicated
* return the address of the new element, or NULL if it failed
* @str: string to store in list
* @head: head of the linked list
* Return: pointer to the address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t element;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	for (element = 0; str[element]; element++)

	new->len = element;
	new->next = *head;
	*head = new;

	return (*head);
}
