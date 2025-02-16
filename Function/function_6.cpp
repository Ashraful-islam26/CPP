#include <iostream>
using namespace std;
// SUM OF N'TH INTEGER

int sum(int num);

int main()
{
    int n;
    cout << "Enter number:- ";
    cin >> n;

    cout << sum(n);

    return 0;
    
}

// Calculating Sum
int sum(int num)
{
    int sum;

    sum = ((num) * (num + 1)) / 2;

    return sum;
}
