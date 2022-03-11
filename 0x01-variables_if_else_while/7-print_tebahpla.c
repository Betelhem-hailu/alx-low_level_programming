#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int num;

	for (num = 122; num >= 97; num--)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
