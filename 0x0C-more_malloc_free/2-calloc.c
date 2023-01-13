#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 *
 * @nmemb: Number of elements in array
 * @size: Size of bytes per element
 *
 * Return: Pointer to allocated memory. NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i = 0, totalmem = nmemb * size;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	mem = malloc(totalmem);
	if (mem == NULL)
		return (NULL);

	for (; i < totalmem; i++)
		*(mem + i) = 0;

	return (mem);
}
