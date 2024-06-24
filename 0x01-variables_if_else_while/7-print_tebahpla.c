#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes here */

/**
 * main - Entry point
 *
 * Description: a function for printing
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'z';

	while (ch >=  'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
