#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * print_name - function that print the name
 * @name: the name
 * @f: pointer to a function
 * Return: Always 0 (Success)
 */

void print_name(char *name, void (*f)(char *))
{

	f(name);
	if (name == NULL && f == NULL)
		return;

}
