#include "main.h"
#include <stdio.h>

int main()
{
	char *word = "_putchar";

	for (i = 0; word[i] != '\0'; i++)
	{
		_putchar(word[i]);
	}
	return 0;
}
