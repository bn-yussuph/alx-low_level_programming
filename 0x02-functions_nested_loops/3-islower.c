#include "main.h"

/**
 * _islower - a fxn to check if a char is in lower case or not
 *
 * Description: a fxn for checking lowercase characters
 *
 * Return: a 1 when lower and 0 otherwise
 */

int _islower(char c)
{
	if (c >= 'a' && c<= 'z')
		return (1);
	else
		return (0);
}
