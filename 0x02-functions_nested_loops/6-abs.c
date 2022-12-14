#include <stdio.h>
#include "main.h"

/**
 * _abs - Compute the absolute |abs| value of integer
 *
 * @num: Given integer
 *
 * Return: |num|
 */

int _abs(int num)
{
	int result;

	if (num < 0)
	{
		result = num * -1;
	}
	else
	{
		result = num;
	}

	return (result);

}
