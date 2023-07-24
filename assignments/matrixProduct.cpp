#include <iostream>
using namespace std;

// Function to multiply two matrices
void multiplyMatrices(int matrixA[], int matrixB[], int row, int column1, int column2, int product[])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            product[i * column2 + j] = 0;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            for (int k = 0; k < column1; k++)
            {
                product[i * column2 + j] += matrixA[i * column1 + k] * matrixB[k * column2 + j];
            }
        }
    }
}

int main()
{
    int row = 1, column1 = 2, column2 = 1;
    int matrixA[row * column1] = {1, 2};
    int matrixB[column1 * column2] = {3, 4};
    int product[row * column2];

    multiplyMatrices(matrixA, matrixB, row, column1, column2, product);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            cout << "The product of the given matrices is " << product[i * column2 + j] << " ";
        }
        cout << endl;
    }

    return 0;
}
