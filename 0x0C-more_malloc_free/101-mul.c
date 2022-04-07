#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _puts - prints a string followed by a new newline
 * @str: str to print
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
}

/**
 * _atoi - converts a string to an int
 * @s: pointer to string
 * Return: converted int
 */

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, first, a;

	for (first = 0; !(s[first] >= 48 && s[first] <= 57); first++)
		if (s[first] == '-')
			sign *= -1;

	for (a = first; s[a] >= 48 && s[a] <= 57; a++)
	{
		resp *= 10;
		resp += (s[a] - 48);
	}

	return (sign * resp);
}

/**
 * print_int - prints an integer
 * @n: int
 * Return: void
 */

void print_int(unsigned long int n)
{
	unsigned long int divisor = 1;
	unsigned long int a, resp;

	for (a = 0; n / divisor > 9; a++, divisor *= 10)
		;

	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}
}

/**
 * main - returns the product of two positive numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3 || !_atoi(argv[1]) || !_atoi(argv[2]))
	{
		_puts("Error\n");
		exit(98);
	}

	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
