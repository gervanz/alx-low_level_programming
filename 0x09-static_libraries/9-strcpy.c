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
	/* Initialise length-getter and loop variables */
	int len = 0, i = 0;

	/* Loop through string array to get length of string */
	while (src[len] != '\0')
		len++;

	/**
	 * Loop through source string, coping index value to
	 * corresponding destination index +1 for null terminator
	 */
	for (; i <= len; i++)
		dest[i] = src[i];

	/* Return destination string */
	return (dest);
}
