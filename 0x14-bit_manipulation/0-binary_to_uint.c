#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to unsigned int
 *
 * @b: string containing the binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
int f;
unsigned int dec = 0;
if (!b)
{
return (0);
}
for (f = 0; b[f]; f++)
{
if (b[f] < '0' || b[f] > '1')
{
return (0);
}
dec = 2 * dec + (b[f] - '0');
}
return (dec);
}
