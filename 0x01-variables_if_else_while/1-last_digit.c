#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)

{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n % 10 > 5)
{
printf("the last digit of %i is %i and is greater than 5\n", n, n % 10);
}

else if (n % 10 == 0)
{
printf("the last digit of %i is %i and is 0\n", n, n % 10);
}

else
{
printf("the last digit of %i is %i and is less than 6 and not 0\n", n, n % 10);
}

return (0);
}
