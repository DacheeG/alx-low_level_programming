#include <stdio.h>
#include "main.h"

/**
 * print _to_98 - print all numbers from input to 98
 * Description:  ll natural numbers from n to 98
 * @n: the starting number
 * Return: 0 or 1
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

