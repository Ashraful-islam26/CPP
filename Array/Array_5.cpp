#include <bits/stdc++.h>
using namespace std;

void arrayInput(int ar[], int n);
void arrayOutput(int ar[], int n);

int main()
{
    int n;
    cout << "Enter Array Size: ";
    cin >> n;
    int ar[n];
    arrayInput(ar, n);

    const int N = 1e6 + 2;
    int idx[N];
    fill(idx, idx + N, -1); // Initialize all indices to -1

    int minindex = n; // Initialize minindex with n (maximum possible value)

    for (int i = 0; i < n; i++)
    {
        if (idx[ar[i]] != -1)
        {
            minindex = min(minindex, idx[ar[i]]);
        }
        else
        {
            idx[ar[i]] = i;
        }
    }

    if (minindex == n)
    {
        cout << "No repeating element\n";
    }
    else
    {
        cout << "Minimum index of repeating element: " << minindex << endl;
    }

    return 0;
}

void arrayInput(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Array[" << i << "] Element: ";
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
