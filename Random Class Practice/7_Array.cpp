#include <bits/stdc++.h>
using namespace std;
// Maximum & minimum in a Array
int main()
{
    int n; // Declaring Array Size

    cout << "Enter Array Size: ";
    cin >> n; // Initializing size

    int ar[n]; // Declaring Array

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Array[ " << i << " ]Element: ";
        cin >> ar[i]; // Taking Input in every index
    }

    int maxNum = INT_MIN; // INT_MIN is a system define large negative number
    int minNum = INT_MAX; // INT_MAX is a system define large positive number

    for (int i = 0; i < n; i++)
    {
        maxNum = max(maxNum, ar[i]); // Using in-built max function
        minNum = min(minNum, ar[i]); // Using in-built min function
    }

    cout << "Maximum =" << maxNum << endl;
    cout << "Minimum = " << minNum << endl;
    
    return 0;
}
