#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name.
 *
 * @name: Name to print
 * @f: Function to print name
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
