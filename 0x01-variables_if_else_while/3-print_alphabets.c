#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes here */

/* betty style doc for function goes here */
int main(void)
{
	char ch = 'a';
	char chaa = 'A';
	while(ch <=  'z')
	{
		putchar(ch);
		ch++;
	}

	while(chaa <= 'Z')
	{	
		putchar(chaa);
		chaa++;
	}

	putchar('\n');
	return (0);
}
