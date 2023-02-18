#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Program that prints combination of the two digit
 * Allowed editors: vi, vim, emacs
 * All your files should end with a new line
 * A README.md file, at the root of the folder of the project
 * There should be no errors and no warnings during compilation
 * You are not allowed to use system
 * Return: 0
*/
int main(void)
{
int c;
int d;
int e = 0;
while (e < 10)
{
d = 0;
while (d < 10)
{
c = 0;
while (c < 10)
{
if (c != d && e < d && d < c)
{
putchar('e' + e);
putchar('e' + d);
putchar('e' + c);
if (c + d + e != 9 + 8 + 7)
{
putchar(',');
putchar(' ');
}
}
c++;
}
d++;
}
e++;
}
putchar('\n');
return (0);
}
