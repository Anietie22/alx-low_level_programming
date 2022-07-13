#include "main.h"
/**
* _strlen - that returns the length of a string
*@s: string being counted
* Return: Always 0.
*/
int _strlen(char *s)
{
int i;
i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
