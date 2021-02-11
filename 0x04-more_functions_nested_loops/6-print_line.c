#include "holberton.h"
/**
 * print_line - prints a line which is n times long
 * @n: number of times _ is printed
 * Return: void
 */
void print_line(int n)
{
int line = 0;
while (line < n)
{
_putchar('_');
line++;
}
_putchar('\n');
}
