#include "main.h"
/**
 * _strlen - check the code
 * @s :pointer
 * Return: void.
 */
 int _strlen(char *s)
{
int i = *s, counter = 0;
while (i != '\0')
{
counter++;
i++;
}
return (counter);
}
