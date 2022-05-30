#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal number
 *
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
int i, count = 0;
unsigned long int rut;
for (i = 19; i >= 0; i--)
{
rut = n >> i;
if (rut & 1)
{
printf("%d", 1);
count++;
}
else if (count)
{
printf("%d", 0);
}
}
if (!count)
{
printf("%d", 0);
}

}
