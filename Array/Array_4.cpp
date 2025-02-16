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
    int ar[n + 1];
    ar[n + 1] = -1;
    arrayInput(ar, n);

    if (n == 1)
    {

        cout << "1" << endl;
        return 0;
    }
    int rbd = 0;
    int mx = -1;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] > mx && ar[i] > ar[i + 1])
        {
                rbd++;
        }

        mx= max(rbd,ar[i]);
    }
    cout<<rbd<<endl;

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
