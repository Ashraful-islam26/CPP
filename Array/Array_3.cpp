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

    int pd = ar[1] - ar[0];
    int curr = 2;
    int ans = 2;
    int j = 2;

    while (j < n)
    {
        if (pd == ar[j] - ar[j - 1])
        {
            curr++;
        }
        else
        {
            pd = ar[j] - ar[j - 1];
            curr = 2;
        }

        ans = max(curr, ans);
        j++;
    }

    cout << ans << endl;

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
