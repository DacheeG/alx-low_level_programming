#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit number of base 10
 * starting from 0, follow by a new line
 * Return: 0
 */
int main(void)
{
int c;
int d = 0;
while (d < 10)
{
c = 0;
while (c < 10)
{
if (d != c && d < c)
{
putchar('0' + d);
putchar('0' + c);
if (c + d != 17)
{
putchar(',');
putchar(' ');
}
}
c++;
}
d++;
}
putchar('\n');
return (0);
}
