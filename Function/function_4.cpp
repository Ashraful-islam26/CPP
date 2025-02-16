#include <iostream>
using namespace std;
// CALCULATING nCr
int factorial(int num);

int main()
{
    int n,r;
    cout << "Enter number:- ";
    cin >> n>>r;

   int nCr=(factorial(n))/(factorial(n-r)*factorial(r));   // nCr= n! ÷ (n-r)! * r!

   cout<<nCr;

    return 0;
}

//Calculating Factorial
int factorial(int num)
{
    int product = 1;
    for (int i = 2; i <= num; i++)
    {
        product *= i;
    }

    return product;
}
