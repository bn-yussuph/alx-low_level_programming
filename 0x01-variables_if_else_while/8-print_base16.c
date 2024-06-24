#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes here */

/**
 * main - Entry point
 *
 * Description: a function for base six conversion
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 16; a++)
		printf("%x", a);
	printf("\n");
	return (0);
}
