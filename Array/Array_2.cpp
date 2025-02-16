#include <bits/stdc++.h>
using namespace std;
// MAX TILL [i]

void arrayInput(int ar[], int n);
void arrayOutput(int ar[], int n);

int main()
{
    int n;

    cout << "Enter Array Size: ";
    cin >> n;
    int ar[n];
    arrayInput(ar, n);

    int subSum = 0;

    for (int i = 0; i < n; i++)
    {
        subSum = 0;
        for (int j = i; j < n; j++)
        {
            subSum += ar[j];
            cout << subSum << endl;
        }
    }

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
