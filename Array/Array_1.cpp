#include <bits/stdc++.h>
using namespace std;
// MAXIMUM IN AN ARRAY


void arrayInput(int ar[], int n);
void arrayOutput(int ar[], int n);

int main()
{
    int n;

    cout << "Enter Array Size: ";
    cin >> n;
    int ar[n];
    arrayInput(ar, n);

    int maximum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maximum = max(ar[i], maximum);
        
    }
    cout << "Maximum is = " << maximum;

    return 0;
}

void arrayInput(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Array[ " << i << " ]Element: ";
        cin >> ar[i];
    }
}

void arrayOutput(int ar[], int n)
{
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
}
