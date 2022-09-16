#include "main.h"

/**
* print_most_numbers - print number 0 to 9
* Return : Always 0
*/

void print_most_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		if (num1 != 2  && num1 != 4)
		{
			_putchar(num1);
		}
		a++;
	}
	_putchar('\n');
}
