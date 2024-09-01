//? W.A.P to apply simple mathematical operation(add,sub,div & mul) on two 2D Matrix.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//% Addtion
void add_matrix(int matrix_A[4][4], int matrix_B[4][4])
{
    int add[4][4];
    cout << "Addition of matrix_A & matrix_B:- " << endl;
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            add[row][col] = matrix_A[row][col] + matrix_B[row][col];
            cout << setw(8) << add[row][col] << " ";
        }
        cout << endl;
    }
}
//% Subtraction
void sub_matrix(int matrix_A[4][4], int matrix_B[4][4])
{
    int sub[4][4];
    cout << "Subtraction of matrix_A & matrix_B:- " << endl;
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            sub[row][col] = matrix_A[row][col] - matrix_B[row][col];
            cout << setw(8) << sub[row][col] << " ";
        }
        cout << endl;
    }
}
//% Multiplication
void mul_matrix(int matrix_A[4][4], int matrix_B[4][4])
{
    int mul[4][4];
    cout << "Multiplication of matrix_A & matrix_B:- " << endl;
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            mul[row][col] = matrix_A[row][col] * matrix_B[row][col];
            cout << setw(8) << mul[row][col] << " ";
        }
        cout << endl;
    }
}
//% Division
void div_matrix(int matrix_A[4][4], int matrix_B[4][4])
{
    double div[4][4];
    cout << "division of matrix_A & matrix_B:- " << endl;
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (matrix_B[row][col] != 0)
            {
                div[row][col] = static_cast<double>(matrix_A[row][col]) / matrix_B[row][col];
                cout << setw(8) << div[row][col] << " ";
            }
            else
            {
                cout << "Infinity" << endl;
            }
        }
        cout << endl;
    }
}

int main()
{
    int matrix_A[4][4], matrix_B[4][4];
    cout << "Enter Elements of your matrix_A: ";
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> matrix_A[row][col];
        }
    }
    cout << endl;
    cout << "Enter Elements of your matrix_B: ";
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> matrix_B[row][col];
        }
    }
    cout << "MATRIX(A):" << endl;
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << setw(2) << matrix_A[row][col] << " ";
        }
        cout << endl;
    }
    cout << "MATRIX(B):" << endl;
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << setw(2) << matrix_B[row][col] << " ";
        }
        cout << endl;
    }
    char operation;
    cout << "Enter type of operation on Matrix_A & Matrix_B: ";
    cin >> operation;
    switch (operation)
    {
    case '+':
        add_matrix(matrix_A, matrix_B);
        break;
    case '-':
        sub_matrix(matrix_A, matrix_B);
        break;
    case '*':
        mul_matrix(matrix_A, matrix_B);
        break;
    case '/':
        div_matrix(matrix_A, matrix_B);
        break;
    }

    return 0;
}