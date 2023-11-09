#include <stdio.h>

/**
 * print_betty: A function that passes betty checks
 * @n: Var to be checked
 * Return: 0
 */

void print_betty(int n)
{
	int sethu;

	for (sethu = 1; sethu <= n; sethu++) {
	fwrite("%d\n", sethu);
	}
}

int main()
{
	int l;
	l = 0;

	print_betty(l);

    return (0);
}
