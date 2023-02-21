#include "main.h"

/**
 * print_alphabet - as the main function that prints alphabets in lowercase
 * Return: end with 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar ('\n');
}
