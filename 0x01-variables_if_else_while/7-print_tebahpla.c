#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes here */

/* betty style doc for function goes here */
int main(void)
{
	char ch = 'z';
	while(ch >=  'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
