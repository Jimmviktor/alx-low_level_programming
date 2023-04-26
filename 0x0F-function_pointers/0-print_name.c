#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using pointer to function
 * @name: string to print.
 * @f: fuction to use.
 *
 * Return: NOTHING
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	f(name);
}
