#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
	unsigned int d;

	d = 0;
		while (d < size)
		{
			if (d % 10)
			{
				printf(" ");
			}
			if (!(d % 10) && d)
			{
				printf("\n");
			}
			printf("0x%02x", buffer[d]);
			d++;
		}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int *a;

	a = array_range(0, 10);
	simple_print_buffer(a, 11);
	free(a);
		return (0);
}
