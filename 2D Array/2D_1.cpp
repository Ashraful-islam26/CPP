#include <bits/stdc++.h>
using namespace std;
//Input and Printing


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

    // Printing Output
    cout << "2D Array is :- " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ar[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}
