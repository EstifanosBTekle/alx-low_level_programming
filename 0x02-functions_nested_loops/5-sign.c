#include "main.h"

/**
 *print_sign - whether zero, +ve or -ve
 *@n: parameter holder
 *
 *Return: return 1 0 -1 for different cases
 */

int print_sign(int n)
{

if (n == 0)
{
-putchar('0');
return (0);
}

else if (n > 0)
{
_putchat('+');
return (1);
}

else
{
_putchar('-');
return (-1);
}

}
