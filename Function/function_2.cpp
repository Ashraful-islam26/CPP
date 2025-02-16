#include <iostream>
using namespace std;
// PRINTING FIBONACCI SERIES
void printFibo(int num);

int main()
{
    int n;
    cout << "Enter number:- ";
    cin >> n;
    printFibo(n);

    return 0;
}

// Printing Fibonacci
void printFibo(int num)
{
    int t1 = 0;
    int t2 = 1;
    for (int i = 0; i < num; i++)
    {
        cout << t1 << " ";
        
        int nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}