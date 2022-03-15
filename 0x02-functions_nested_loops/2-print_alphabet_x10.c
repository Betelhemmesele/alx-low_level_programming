#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int a, b;
	a = 0;
	while(a < 10)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);

		}
		a++;
		_putchar('\n');
		
	}
}
