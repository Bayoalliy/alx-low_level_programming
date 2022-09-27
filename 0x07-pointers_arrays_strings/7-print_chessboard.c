#include <stdio.h>
#include <string.h>
/**
 * print_chessboard - print all elements in an array
 * @a : pointer to an array
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			printf("%c", a[i][j]);
	printf("\n");
	}
}
