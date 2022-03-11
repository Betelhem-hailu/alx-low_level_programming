#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	num = 97;
	while (num <= 122)
	{
		if (num == 101 || num == 113)
		{

		}
		else
		{
		putchar(num);
		}
		num++;
	}
	putchar('\n');
	return (0);
}
