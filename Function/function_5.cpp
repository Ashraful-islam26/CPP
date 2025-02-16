#include <iostream>
using namespace std;
// PASCAL TRIANGLE PATTERN
//        1
//        1 1
//        1 2 1
//        1 3 3 1
//        1 4 6 4 1

int factorial(int num);

int main()
{
    int n;
    cout << "Enter number:- ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << factorial(i) / (factorial(i - j) * factorial(j)) << " ";
        }
        cout << endl;
    }

    return 0;
}

// Calculating Factorial
int factorial(int num)
{
    int product = 1;
    for (int i = 2; i <= num; i++)
    {
        product *= i;
    }

    return product;
}
