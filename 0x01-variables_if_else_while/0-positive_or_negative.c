#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
<<<<<<< HEAD
 * main - print if the number is positive,negative or 0
 * Return: Always 0
 */
int main(void)
{
	int n;
															            strand(time(0));
	n = rarnd() - RAND_MAX / 2;
=======
 * main - program assigns a random number to the int n each
 * time it is executed
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
>>>>>>> 13a5f2cb0c99d298b78b2ea91e8a708557c8c70f
	if (n > 0)

	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
