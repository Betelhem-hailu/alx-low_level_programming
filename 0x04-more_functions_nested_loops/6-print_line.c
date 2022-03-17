#include "main.h"

/**
 * print_line - check the code
 * @c : character is used
 * Return: Always 0.
 */

 void print_line(int n)
 {
     int i = 0;

while (i < n)
{
    if (n > 0)
    {
    _putchar('_');
    i++;
    }
    else
    _putchar('\n');
}
_putchar('\n');
 }
