#include "main.h"

/**
 * main - Entry point
 *
 * Description: fxn to print alhabets
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	int count = 0;

	while (count++ < 9)
	{
		for (ch = 'a'; ch < 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
