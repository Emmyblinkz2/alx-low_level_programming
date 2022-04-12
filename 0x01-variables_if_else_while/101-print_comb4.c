#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i, j, k;
for (i = 48; i < 58; i++)
{
for (j = 49; j < 58; j++)
{
for (k = 50; j < 58; k++)
{
if (k > j && j > 1)
{
putchar(i);
putchar(j);
putchar(k);
if (i != 55 || j != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
