#include "main.h"

/**
 * main - Entry point
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
