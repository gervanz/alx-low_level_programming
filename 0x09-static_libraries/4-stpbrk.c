#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - To be done
 *
 * @s: Parameter
 * @accept: Parameter
 *
 * Return: 1, till done
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
		s++;
	while (*accept)
		accept++;

	return ("1");
}
