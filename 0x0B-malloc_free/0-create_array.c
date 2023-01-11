#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - Create a array of dynamic memory allocation
 *
 * @size: Size of array
 * @c: Initialization value
 *
 * Return: Array or NULL if size < 1
 */

char *create_array(unsigned int size, char c)
{
	char *s = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (s == NULL)
		return (NULL);
	if (s == 0)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
}
