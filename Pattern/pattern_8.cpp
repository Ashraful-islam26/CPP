#include <iostream>
using namespace std;
// 0-1 PATTERN
//     1
//     0  1
//     0  1  0
//     1  0  1  0
//     1  0  1  0  1

// Using Count

int main()
{
    int n;
    cin >> n;
    int count = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << "  ";                  
            count++;
            if (count > 1)
            {
                count = 0;      
            }
        }
        cout << endl;
    }

    return 0;
}

// Without usimh count

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if ((i + j) % 2 == 0)
//             {
//                 cout << "1  ";
//             }
//             else
//             {
//                 cout << "0  ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }