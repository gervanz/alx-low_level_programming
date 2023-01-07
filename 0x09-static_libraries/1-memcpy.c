#include <stdio.h>
#include "main.h"

/**
 * _memcpy - Copies memory area
 *
 * @dest: Memory area to be copied to
 * @src: Memory area to be copied
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
