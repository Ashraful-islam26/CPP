#include <bits/stdc++.h>
using namespace std;
// BINARY ARRAY SEARCH

int binarySearch(int ar[], int n, int key);

int main()
{
    int n;

    cout << "Enter Array Size: ";
    cin >> n;
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Array[ " << i << " ]Element: ";
        cin >> ar[i];
    }

    int key;
    cout << "Enter Key: ";
    cin >> key;

    if (binarySearch(ar, n, key) != -1)
    {
        cout << "Found in " << binarySearch(ar, n, key) << "th position";
    }
    else
    {
        cout << "Key Not Found in Array";
    }

    return 0;
}
// Search Function
int binarySearch(int ar[], int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (key == ar[mid])
        {
            return mid;
        }
        else if (key <= ar[mid])
        {
            e = mid - 1;
        }
        else if (key > ar[mid])
        {
            s = mid + 1;
        }
    }

    return -1;
}
