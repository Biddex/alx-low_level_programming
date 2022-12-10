#include <stdio.h>
#include <stdl ib.h>
#include <time.h>

/**
 * main - print if the number is positive,negative or 0
 * Return:Always 0
 */
int main(void)
{
	int n;

	strand(time(0));
	n = rarnd() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	
	return (0);
}	
