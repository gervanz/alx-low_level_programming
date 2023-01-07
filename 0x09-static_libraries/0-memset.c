#include <stdio.h>
#include "main.h"

/**
 * _memset - Fills memory with constant byte
 *
 * @s: Memory area
 * @b: Constant byte
 * @n: Bytes to be filled
 *
 * Return: Pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
