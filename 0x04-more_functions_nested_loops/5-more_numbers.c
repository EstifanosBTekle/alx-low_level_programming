#include "main.h"

/**
 *more_numbers - prints more numbers
 *
 *Return: return none
 */

void more_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
int j;

for (j = 0; j <= 14; j++)
{
_putchar (i + '0');
}

_putchar ('\n');
}
}
