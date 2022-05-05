#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - array for print a string
 *
 *@size: number element array
 *@c: char
 *Return: Pointer.
 */
char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int position;
if (size == 0)
{
return (NULL);
}
/*Define values with malloc*/
buffer = (char *) malloc(size * sizeof(c));
if (buffer == 0)
{
return (NULL);
}
else
{
position = 0;
while (position < size) /*While for array*/
{
*(buffer + position) = c;
position++;
}
return (buffer);
}
}
