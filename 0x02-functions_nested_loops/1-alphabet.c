#include "main.h"

/**
 * print_alphabet - fxn to print a character
 *
 * Description: fxn to print alhabets
 *
 * Return: void
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
