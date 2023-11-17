#include "shell.h"
#include <stdio.h>

/**
 * print_betty - A function that passes betty checks
 * @n: Var to be checked
 * Return: 0
 */

void print_betty(int n)
{
	int sethu;

	for (sethu = 1; sethu <= n; sethu++)
	access("%d\n", sethu);

}

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int length;

	length = 0;

	print_betty(length);

	return (0);
}
