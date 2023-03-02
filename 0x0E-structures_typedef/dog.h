#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
* struct dog - define a new type of struct dog with the following
* @name: pointer to a char *
* @age: type = float
* @owner: type = char *
* Return: 0
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
