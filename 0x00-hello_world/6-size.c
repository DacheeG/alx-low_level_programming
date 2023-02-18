#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("size of a char: %d byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %d byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %d byte(s)\n", (unsigned long)sizeof(c));
printf("size ofa long long int: %d byte(s)\n", (unsigned long)sizeof(d));
printf("size of float:%d byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
