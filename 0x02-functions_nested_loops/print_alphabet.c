#include "main.h"

/**
 * main - Entry point
 *
 * Description: A fxn to print alphabets
 *
 * Return: Always 0 (Succes)
 */

void print_alphabet(void)
{
	char ch = 'a';

	while( ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
