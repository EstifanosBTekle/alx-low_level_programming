#include "main.h"

/**
 *print_last_digit - prints zero power
 *@n: parameter
 *
 *Return: return last digit
 */

int print_last_digit(int n)
{
int lastdigit;

if (n < 0)
{
lastdigit = (-1 * (n % 10));
_putchar(lastdigit + '0');
return (lastdigit);
}

else
{
lastdigit = (n % 10):
_putchar(lastdigit + '0');
return (lastdigit);
}
}
