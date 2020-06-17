  
#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if ((a == b && a > c) || (a == c && a > b) || (b == c && a > b))
	{
		largest = a;
	}
	else if ((a == c && a < b) || (b == c && a < b))
	{
		largest = b;
	}
	else if (c > b && c > a)
	{
		largest = c;
	}
	else if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if (a == b && a  == c)
	{
		largest = c;
	}

	return (largest);
}
