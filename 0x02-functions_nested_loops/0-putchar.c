#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a function to print _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *word = "_putchar";
	int i;

	for (i = 0; word[i] != '\0'; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
