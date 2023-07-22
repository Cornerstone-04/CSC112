void sumOFMatrix(int a[][2], int b[][2], int c[][2], int size)
{
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            c[row][col] = a[row][col] + b[row][col];
        }
    }
}