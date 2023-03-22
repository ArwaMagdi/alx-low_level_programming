#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * print_alphabet - printall alphabet in lowercase
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);

	putchar('\n');
}
