#include <stdio.h>
#include "main.h"

/**
 * _strncat - Concatenates two strings
 *
 * @dest: String to be concatenated to
 * @src: String to concatenate
 * @n: Number of bytes of @dest
 *
 * Return: Pointer to concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *new = dest;
	int len = 0, i;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		new[len] = src[i];
		len++;
	}

	return (new);
}
