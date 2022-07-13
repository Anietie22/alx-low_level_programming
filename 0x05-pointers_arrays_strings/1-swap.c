#include "main.h"
/**
* swap_int - that swaps the values of two integers.
*@a: number being swapped
*@b: number being swapped
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	a = b;
	*b = c;
}
