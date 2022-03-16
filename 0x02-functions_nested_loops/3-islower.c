#include "main.h"

/**
 *islower - lower alphabet
 *int c: parameter or argument sent 
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
