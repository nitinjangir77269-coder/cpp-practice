#include <iostream>
using namespace std;

int main()
{
    int r, c;

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    int a[10][10], t[10][10];

    cout << "Enter matrix elements:\n";

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "\nOriginal Matrix:\n";

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose Logic
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            t[i][j] = a[j][i];
        }
    }

    cout << "\nTranspose Matrix:\n";

    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
