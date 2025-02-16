#include <iostream>
using namespace std;
// INVERTED PATTERN
//     1  2  3  4  5
//     1  2  3  4
//     1  2  3
//     1  2
//     1

// EASY APPROACH
int main()
{
    int n;
    cin >> n;
    int count = 1;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << "  ";
            count++;
        }
        count = 1;
        cout << endl;
    }

    return 0;
}

// HARD APPROACH

// The idea is to print column wise.

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n + 1 - i; j++)
//         {
//             cout << j << "  ";
//         }
//         cout << endl;
//     }

//     return 0;
// }