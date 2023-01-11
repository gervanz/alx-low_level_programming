#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - Copies a string
 *
 * @str: Input string
 *
 * Return: Pointer to copied string
 */

char *_strdup(char *str)
{
	char *strcp;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	strcp = malloc(sizeof(char) * (len + 1));

	if (strcp == NULL)
		return (NULL);

	for (; i < len; i++)
		strcp[i] = str[i];
	strcp[i] = '\0';

	return (strcp);
}
