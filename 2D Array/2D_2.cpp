#include <bits/stdc++.h>
using namespace std;

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

    int element;
    bool check = false;
    cout << "Enter Element:- ";
    cin >> element;

    // Searching Element
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ar[i][j] == element)
            {
                cout << "Element Found" << endl;
                check = true;
            }
        }
    }

    if (check == false)
    {
        cout << "Element not Found" << endl;
    }

    return 0;
}