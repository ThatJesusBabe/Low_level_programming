#include "main.h"

/**
* print_most_numbers - print number 0 to 9
* Description: print
* Return : Always 0
*/

void print_most_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		if (a == 2  && a == 4)
		{
			continue;
		}
		else
		{
			_putchar(a);
		}
		a++;
	}
	
	_putchar('\n');
}
