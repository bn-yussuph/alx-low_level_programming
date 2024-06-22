#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: a function to print a random no.
 * @parameter: takes no parameter
 *
 * Return: Always 0 (Success)
  */
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
