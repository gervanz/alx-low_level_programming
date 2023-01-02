#include <stdio.h>
#include "main.h"

/**
 * _strncpy - Copies a string
 *
 * @dest: String to be copied to
 * @str: String t copy from
 * @n: Number of bytes
 *
 * Return: Pointer to copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *new = dest;
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		new[i] = src[i];
	}

	for (; i < n; i++)
	{
		new[i] = '\0';
	}

	return (new);
}
