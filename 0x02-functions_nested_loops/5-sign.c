#include "main.h"

/**
 * print_sign - a fxn to check if a char is in lower case or not
 *
 * @n: accept a char
 *
 * Description: a function for lower case check
 *
 * Return: a 1 when lower and 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
