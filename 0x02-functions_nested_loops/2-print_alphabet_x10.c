#include "main.h"
/**
 *print_alphabet_x10 - print alphabet
 *
 *Return none
 */
void print_alphabet_x10(void)
{
int alphabet;
int i = 0;

while (i<10)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

i++;
_putchar('\n');
}
}
