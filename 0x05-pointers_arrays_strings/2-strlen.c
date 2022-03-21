#include "main.h"
/**
 * _strlen - check the code
 * @s :pointer
 * Return: void.
 */
 int _strlen(char *s)
 {
int i, counter = 0;
for (i = s[0]; i != '\0'; i++)
{
counter++;
}
return (counter);
 }
