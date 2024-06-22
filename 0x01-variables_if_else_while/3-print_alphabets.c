#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes here */

/**
 * main - Entry point
 *
 * Description: function fir numbers
 *
 * Return: Always 0 [Success)
 */
int main(void)
{
	char ch = 'a';
	char chaa = 'A';

	while (ch <=  'z')
	{
		putchar(ch);
		ch++;
	}

	while (chaa <= 'Z')
	{
		putchar(chaa);
		chaa++;
	}

	putchar('\n');
	return (0);
}
