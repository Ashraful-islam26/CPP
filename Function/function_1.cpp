#include <iostream>
using namespace std;
// PRINTING PRIME FUNCTION

void printPrime(int start, int end);
bool isPrime(int num); // A Boolean is a data type that can only have two values: true or false.(true=1/false=0)

int main()
{
    int a, b;
    cout << "Enter numbers:- ";
    cin >> a >> b;
    printPrime(a, b);

    return 0;
}
// Checking Prime
bool isPrime(int num)
{
    if (num <= 1)
        return false; // if ther's only one line of code in the if statement we can avoid brackets;

    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
// Printing Function
void printPrime(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (isPrime(i) == true)
            cout << i << " ";
    }
}