#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes here */

/**
 * main - Entry point
 *
 * Description: a function to print two digit combi
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
