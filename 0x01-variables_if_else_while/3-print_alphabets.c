#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabet in lower case
 * and the in uppercase, follow by a new line
 * Return: 0
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
c++;
}
Char C = 'A';
while (C <= 'Z')
{
putchar(C);
C++;
}
putchar('\n');
return (0);
}
