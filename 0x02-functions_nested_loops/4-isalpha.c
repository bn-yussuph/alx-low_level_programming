#include "main.h"

/**
 * _isalpha - a fxn to check if a char is in lower case or not
 *
 * @c: accept a char
 *
 * Description: a function for lower case check
 *
 * Return: a 1 when lower and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c >= 'Z'))
		return (1);
	else
		return (0);
}
