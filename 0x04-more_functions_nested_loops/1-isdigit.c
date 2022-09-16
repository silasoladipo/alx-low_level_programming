#include "main.h"

/**
 * _isdigit - checks whether a  character is a digit or not
 * @c: tested character
 * Return: 1 if it is, 0 otherwise
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}

	return (0);
}
