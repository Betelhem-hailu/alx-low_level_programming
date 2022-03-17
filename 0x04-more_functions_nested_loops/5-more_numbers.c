#include "main.h"

/**
 * more_numbers - check the code
 * @c : character is used
 * Return: Always 0.
 */

 void more_numbers(void)
 {
int n;
int m = 0;

while (m < 10)
{
    n = 0;
    while (n <14)
    {
        _putchar(n + '0');
        n++;
    }
    m++;
    putchar('\n');
}
 }
 int main(void)
{
    more_numbers();
    return (0);
}
