#include "main.h"

/**
 *_isalpha - checks whether is alhabet
 *@c: argument to be passed
 *
 *Return: return 1 if alpha
 */

int _isalpha(int c)
{

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}

else
{
return (0);
}
}
