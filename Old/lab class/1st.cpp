#include <iostream>
using namespace std;
int main()
{
    int r1, r2, c1, c2;
    cout << "Enter the row and column of the first matrix : ";
    cin >> r1 >> c1;
    cout << "Enter the row and column of the second matrix : ";
    cin >> r2 >> c2;
    if (c2 != r2)
        cout << "Multiplication is not possible!";
    else
    {
        int mat1[r1][c1], mat2[r2][c2];

        cout << "Enter the element of the first matrix : \n";
        for (int i = 0; i < r1; ++i)
            for (int j = 0; j < c1; ++j)
            {
                cout << "a[" << i + 1 << ", " << j + 1 << "] = ";
                cin >> mat1[i][j];
            }
        cout << "\nEnter the element of the first matrix : \n";

        for (int i = 0; i < r1; ++i)
            for (int j = 0; j < c1; ++j)
            {
                cout << "b[" << i + 1 << ", " << j + 1 << "] = ";
                cin >> mat2[i][j];
            }
        cout << "\nThe resultant matrix is : \n";

        for (int i = 0; i < r1; ++i)
        {
            for (int j = 0; j < c2; ++j)
            {
                int sum = 0;
                for (int k = 0; k < r2; ++k)
                    sum += mat1[i][k] * mat2[k][j];
                cout << sum << "   ";
            }
            cout << '\n';
        }
    }
    return 0;
}