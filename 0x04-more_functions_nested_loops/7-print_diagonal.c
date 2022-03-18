#include "main.h"

/**
 *print_diagonal - prints diagonally
 *@n: print int
 *
 *Return: return none
 */

void print_daigonal(int n)
{
int i;
int b;

if (n <= 0)
{
_putchar ('\n');
}

else
{
for (i = 0; i < n; i++)
{
for (b = 0; b < i; b++)
{
_putchar (' ');
}

_putchar (92);
_putchar ('\n');
}
}
}

