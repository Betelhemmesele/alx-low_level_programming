#include "main.h"
#include <stdio.h>
/**
 * _abs - a function that computes the absolute value of an integer
 * @ab: integer input
 * Return: absolute value of ab
 */
int _abs(int ab)
{
	if (ab >= 0)
	{
		printf("%i", ab);
	}
	else
	{
		ab = -1 * ab;
		printf("%i", ab);
	}
	return (0);

}


