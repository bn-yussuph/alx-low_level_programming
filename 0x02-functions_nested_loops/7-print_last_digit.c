#include "main.h"

/**
 * print_last_digit - a fxn to check if a char is in lower case or not
 *
 * @n: accept a char
 *
 * Description: a function for lower case check
 *
 * Return: a 1 when lower and 0 otherwise
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');
	return (last_digit);
}
