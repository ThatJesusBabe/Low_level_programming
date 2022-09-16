#include "main.h"

/**
* _isdigit - check the code for Holberton School students.
* @c: character
* Return: 1 if tru and 0if false
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
