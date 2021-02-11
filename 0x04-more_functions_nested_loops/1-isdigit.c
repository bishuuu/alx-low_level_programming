#include "holberton.h"
/**
 * _isdigit - checks if case is a digit or not
 * @c: character checked if it is a digit or not
 * Return: 1 if digit, 0 if not
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
