#include "main.h"

/**
 *print_to_98 - prints to 98
 *@n: parameter
 *
 *Return: return none
 */

void print_to_98(int n)
{
if (n > 98)
{
while (n >= 98)
{
_putchar(n);
_putchar(',');
_putchar (' ');
n--;
}
}

else
{
while (n <= 98)
{
_putchar(n);
_putchar(',');
_putchar (' ');
n++;
}
}

}
