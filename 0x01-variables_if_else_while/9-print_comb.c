#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes here */

/* betty style doc for function goes here */
int main(void)
{
	int a;
	for (a = 0; a < 10;a++){
		putchar('0' + a);
		if (a < 9){
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
