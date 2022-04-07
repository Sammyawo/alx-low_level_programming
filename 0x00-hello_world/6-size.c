#include <stdio.h>
/**
 *main - entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float e;

printf("size of an int: %d byte(s)\n", sizeof(a));
printf("size of an long int: %d byte(s)\n", sizeof(b));
printf("size of an long long int: %d byte(s)\n", sizeof(c));
printf("size of an char: %d byte(s)\n", sizeof(d));
printf("size of an float: %d byte(s)\n", sizeof(e));
return (0);
}
