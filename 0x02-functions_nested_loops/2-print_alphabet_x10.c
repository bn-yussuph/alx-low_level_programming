
#include "main.h"


/**
 * print_alphabet_x10 - fxn to print alhabets
 *
 * Description: fxn to print alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	int count = 0;

	while (count++ <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
