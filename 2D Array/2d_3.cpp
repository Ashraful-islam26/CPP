#include <bits/stdc++.h>
using namespace std;

//Spiral Order Matrix Traversal

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

    // Printing in Spiral Order
    cout << "Spiral Order of 2D Array is :- " << endl;

    int top = 0, bottom = n - 1, left = 0, right = m - 1;

    while (top <= bottom && left <= right)
    {
        // Print the top row
        for (int i = left; i <= right; i++)
        {
            cout << ar[top][i] << " ";
        }
        top++;

        // Print the right column
        for (int i = top; i <= bottom; i++)
        {
            cout << ar[i][right] << " ";
        }
        right--;

        // Print the bottom row
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << ar[bottom][i] << " ";
            }
            bottom--;
        }

        // Print the left column
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << ar[i][left] << " ";
            }
            left++;
        }
    }

    cout << endl;
    return 0;
}
