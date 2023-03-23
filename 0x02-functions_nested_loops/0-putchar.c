#include "main.h"

/**
 * main - Check description
 * Description: It prints the word _putchar, followed by a new line.
 * Return: 0.
 */

int _putchar(void)
{
        char word[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		write(word[i]);
	write('\n');

	return (0);
}
