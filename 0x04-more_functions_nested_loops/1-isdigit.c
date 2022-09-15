#include "holberton.h"

/**
 * _isdigit - check the code for Holberton School students.
 * @c: characters
 * Return: 1 and 0
 */

int _isdigit(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
