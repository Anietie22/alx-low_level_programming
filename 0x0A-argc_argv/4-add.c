#include "main.h"

/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: array of pointer to strings
 * Return: 0 if no errors, else
 */
int main(int argc, char *argv[])
{
int a, b, sum = 0;
	if (argc < 1)
	printf("0\n");
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
