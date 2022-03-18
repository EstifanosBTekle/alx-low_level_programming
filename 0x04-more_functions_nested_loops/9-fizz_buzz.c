#include <stdio.h>

/**
 *main - entry point
 *
 *Return: return 0
 */

int main(void)
{
int p = 100;
int i;

while (i <= p)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}

else if (i % 3 == 0)
{
printf("Fizz ");
}

else if (i % 5 == 0)
{
printf("Buzz ");
}

else
{
printf("%d ", i);
}

i++;
}

printf('\n'');
return (0);
}

