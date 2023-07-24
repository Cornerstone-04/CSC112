#include <iostream>
using namespace std;

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

int main()
{
    const int size = 3;
    const int row = 3;
    const int column = 2;

    int A[row][column] = {
        {1, 2},
        {3, 4},
        {5, 6},
    };

    int B[row][column] = {
        {1, 2},
        {3, 4},
        {5, 6},
    };

    int C[row][column];

    cout << "Matrix sum: " << endl;
    sumOFMatrix(A, B, C, size);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}