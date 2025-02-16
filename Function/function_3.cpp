#include <iostream>
using namespace std;
// CALCULATING FACTORIAL
int factorial(int num);

int main()
{
    int n;
    cout << "Enter number:- ";
    cin >> n;

    cout << factorial(n);

    return 0;
}

// Calculating Factorial
int factorial(int num)
{
    int product = num;

    for (int i = num - 1; i >= 1; i--)
    {
        product *= (num - i);
    }

    return product;
}
