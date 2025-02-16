#include <bits/stdc++.h>
using namespace std;
// n x n transpose matrix

int main()
{

    int n, m;
    cout << "Enter Array Size: " << endl;
    cin >> n >> m;

    int ar[n][m];

    // Taking Input
    cout << "Enter Array Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
        }
    }

    // Swap
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < m; j++)
        {

            int temp = ar[i][j];
            ar[i][j] = ar[j][i];
            ar[j][i] = temp;
        }
    }

    // Printing Output
    cout << "Transposed 2D Array is :- " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
