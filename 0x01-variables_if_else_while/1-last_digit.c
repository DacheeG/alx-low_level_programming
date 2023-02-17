#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
int n;
int Last;

srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (Last > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, Last);
else if (Last == 0)
printf("Last digit of %i is %i and is 0\n", n, Last);
else if (Last < 6)
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, Last);
return (0);
}
