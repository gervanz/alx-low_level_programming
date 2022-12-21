#include <stdio.h>
#include "main.h"

/**
 * _strcpy - Copies the string pointed to by *src
 * icluding terminating null bytr(\0)
 * to buffer pointed to by *dest
 *
 * @src: Source string pointer
 * @dest: Destination string pointer
 *
 * Return: Copied string pointer
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i = 0;

	while (src[len] != '\0')
		len++;

	for (; i <= len; i++)
		dest[i] = src[i];

	return (dest);
}
