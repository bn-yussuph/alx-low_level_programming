#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes here */
/** 
 * main - Entry point
 *
 * Description: a function for numbers
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <=  'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
