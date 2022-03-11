#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x, y;

	for (x = 48; x <= 97; x++)
	{
		for (y = 48; y <= 97; y++)
		{
			if (x == y || y <= x)
			{
			}
			else
			{
				putchar(x);
				putchar(y);
				if (x == 56 && y == 57)
				{
				}
				else
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
