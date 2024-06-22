#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes here */

/* betty style doc for function goes here */
int main(void)
{
	char ch = 'a';
	while(ch <=  'z')
	{
		if (ch == 'e' || ch == 'q'){
			ch++;
			continue;
		}
		else 
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
