#include "main.h"

/**
 *_islower - lower alphabet
 *@c: parameter or argument sent
 *
 * Return: return 1 for lower case
 */

int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
