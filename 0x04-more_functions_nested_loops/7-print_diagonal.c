#include "main.h"

/**
 * print_diagonal - check the code
 * @c : character is used
 * Return: Always 0.
 */

 void print_diagonal(int n)
 {
     int i = 0;
     int j;

     while (i < n)
     {
         j = 0;
         while (j < i)
         {
             _putchar(' ');
             j++;
         }
         if (n > 0)
         {
         _putchar('\\');
         _putchar('\n');
         }
         else
         {
             _putchar('\n');
         }
         i++;
     }
 }
