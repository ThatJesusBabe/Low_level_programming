#include "main.h"

/**
* swap_int - function that swaps the values of two integers.
* @a: pointer one
* @b: pointer two
* Return: zero
*/

void swap_int(int *a, int *b)
{
	 *a += *b;
	 *b = *a - *b;
	 *a = *a - *b;
}
