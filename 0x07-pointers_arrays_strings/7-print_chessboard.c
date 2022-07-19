#include "main.h"

/**
 * print_chessboard - board to print
 * @a: prints things
 * Return: returns output
 **/

void print_chessboard(char (*a)[8])

{
int i, j;
char tmp;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
tmp = a[i][j];
_putchar(tmp);
}
_putchar('\n');
}
}
