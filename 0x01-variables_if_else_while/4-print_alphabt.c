#include <stdio.h>

/**
 * main -acts as the main function
 * Return: end with 0
 */
int main(void)
{
	char i; 

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
		putchar(i);
	putchar('\n');
	return (0);
}
