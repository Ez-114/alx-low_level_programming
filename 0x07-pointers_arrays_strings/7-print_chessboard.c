/**
 * print_chessboard - a function that prints the chessboard.
 * @a: pointer to a 2D array
*/
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			printf("%s", a[row][col]);
		}
		printf("\n");
	}
}
