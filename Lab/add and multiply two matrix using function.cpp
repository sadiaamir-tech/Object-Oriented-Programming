#include <iostream>
using namespace std;


void addMatrix(int A[3][3], int B[3][3], int sum[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrix(int A[3][3], int B[3][3], int product[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            product[i][j] = 0;
            for(int k = 0; k < 3; k++)
            {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int A[3][3], B[3][3];
    int sum[3][3], product[3][3];

    // Input first matrix
    cout << "Enter elements of first 3x3 matrix:\n";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }

    // Input second matrix
    cout << "\nEnter elements of second 3x3 matrix:\n";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> B[i][j];
        }
    }

    addMatrix(A, B, sum);

    multiplyMatrix(A, B, product);

    cout << "\nSum of matrices:\n";
    displayMatrix(sum);

    cout << "\nProduct of matrices:\n";
    displayMatrix(product);

    return 0;
}
