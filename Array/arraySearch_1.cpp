#include <bits/stdc++.h>
using namespace std;
// LINEAR ARRAY SEARCH

int linearSearch(int ar[], int n, int key);

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

    if (linearSearch(ar, n, key) != false)
    {
        cout << "Found in " << linearSearch(ar, n, key) << "th position";
    }
    else
    {
        cout << "Key Not Found in Array";
    }

    return 0;
}   

//Search Function
int linearSearch(int ar[], int n, int key)
{
    int keep;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == key)
        {
            return i;
        }
    }
    return false;
}
