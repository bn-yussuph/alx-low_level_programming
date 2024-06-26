#include "main.h"
#include <stdio.h>

int main()
{
	char *word = "_putchar";
	int i;

	for (i = 0; word[i] != '\0'; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return 0;
}
