#include <bits/stdc++.h>
using namespace std;
// SELECTION SORT
/*Selection sort is a simple and efficient sorting
 algorithm that works by repeatedly selecting
 the smallest(or largest) element from the unsorted
  portion of the list and moving it to the sorted
  portion of the list.*/

void arrayInput(int ar[], int n);
void arrayOutput(int ar[], int n);

int main()
{
    int n;

    cout << "Enter Array Size: ";
    cin >> n;
    int ar[n];
    arrayInput(ar, n);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[j] < ar[i])
            {
                int temp = ar[j];
                ar[j] = ar[i];
                ar[i] = temp;
            }
        }
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
