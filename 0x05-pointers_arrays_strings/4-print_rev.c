#include "main.h"
/**
 ** print_rev - prints a string in stdout in reverse
 ** @s: string to print
 **
 ** Return: void
 **/

void print_rev(chat *s)
{
	int y = 0;

	while (*(s + y))
		y++;
	y = y - 1;
	while (y >= 0)
	{
		_putchar(*(s + y));
		y--;
	}
	_putchar('\n');
}
