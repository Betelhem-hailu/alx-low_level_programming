#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*more headers goes here*/

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("0 is zero\n");
	return (0);
}
