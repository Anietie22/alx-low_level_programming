#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - pointer to a new string which is a duplicate f the string str
 * @str: string to copy
 * Return: a pointer to the array, ot NULL if it fails
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	i++;
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
