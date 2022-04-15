#include "main.h"
/**
 * print_number - that prints an integer
 *
 *@n: print int
 * Return: Always 0.
 */
void print_number(int n)
{
unsigned int n;
if (n < 0)
{
_putchar('-');
n = -n;
}
else
{
n = n;
}
if (n / 10 != 0)
print_number(n / 10);
_putchar((n % 10) + '0');
}
