#include "main.h"

/**
 * print_most_numbers - check the code
 * @c : character is used
 * Return: Always 0.
 */
void print_most_numbers(void)
 {
  int n = 0;

  while (n < 10)
  {
     if (n != 2 && n != 4)
     {
         _putchar(n + '0');
     }
     else
     {
         continue;
     }
     n++;
  }
  _putchar('\n');
 }
