#include "main.h"

/**
 * print_numbers - prints all numbers from 0 to 9
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
