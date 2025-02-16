#include <bits/stdc++.h>
using namespace std;
// BUBBLE SORT
/*Bubble Sort is the simplest sorting algorithm that
works by repeatedly swapping the adjacent elements
 if they are in the wrong order.*/

void arrayInput(int ar[], int n);
void arrayOutput(int ar[], int n);

int main()
{
    int n;

    cout << "Enter Array Size: ";
    cin >> n;
    int ar[n];
    arrayInput(ar, n);

    int count = 1;

    while (count < n)
    {
        for (int i = 0; i < n - count; i++)
        {
            if (ar[i] > ar[i + 1])
            {
                int temp = ar[i];
                ar[i] = ar[i + 1];
                ar[i + 1] = temp;
            }
        }
        count++;
    }
    cout << endl;
    arrayOutput(ar, n);

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