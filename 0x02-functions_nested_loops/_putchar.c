#include "main.h"
#include <unistd.h>

int _putchar()
{
	return (write(1, &c, 1));
}
