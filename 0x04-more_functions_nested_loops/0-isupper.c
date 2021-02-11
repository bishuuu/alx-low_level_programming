#include "holberton.h"
/**
 * _isupper - checks if case given is uppercase
 * @c: character to be checked if uppercase or not
 * Return: 1 if uppercase, 0 if not
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}
