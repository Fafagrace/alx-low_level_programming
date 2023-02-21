#include "main.h"

/**
 * print_alphabet_x10 - serves as function that prints alphabets 10 times
 *
 * Reurn: end with 0
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}
