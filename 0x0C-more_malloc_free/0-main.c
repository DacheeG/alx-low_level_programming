#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *c;
	int *d;
	float *f;
	double *g;

	c = malloc_checked(sizeof(char) * 1024);
	printf("%p\n", (void *)c);
	d = malloc_checked(sizeof(int) * 402);
	printf("%p\n", (void *)d);
	f = malloc_checked(sizeof(float) * 100000000);
	printf("%p\n", (void *)f);
	g = malloc_checked(INT_MAX);
	printf("%p\n", (void *)g);
	free(c);
	free(d);
	free(f);
	free(g);
	return (0);
}
