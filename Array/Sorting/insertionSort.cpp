#include <bits/stdc++.h>
using namespace std;
// INSERTION SORT
/*Insertion sort is a simple sorting algorithm
that works by iteratively inserting each
element of an unsorted list into its correct
 position in a sorted portion of the list.*/

void arrayInput(int ar[], int n);
void arrayOutput(int ar[], int n);

int main()
{
    int n;

    cout << "Enter Array Size: ";
    cin >> n;
    int ar[n];
    arrayInput(ar, n);

    for (int i = 1; i < n; i++)
    {
        int temp = ar[i];

        int j = i - 1;
        while (j >= 0 && ar[j] > temp)
        {
            ar[j + 1] = ar[j];
            j--;
        }

        ar[j + 1] = temp;
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