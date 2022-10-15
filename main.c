#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int count;

	count = _printf("Let's %s try% to %c%c%c printf a simple sentence.\n", "wonderfully", 'A', 'A', 'A');
	printf("count: %d\n", count);
        return (0);
}
