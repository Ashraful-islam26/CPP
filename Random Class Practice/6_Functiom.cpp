#include <iostream>
using namespace std;
// PRINTING & ADDING FUNCTION

void print(int num);         // function prototype
int add(int num1, int num2); // function prototype

int main()
{
    int a, b;
    cout << "Enter numbers:- ";
    cin >> a >> b;

    int sum = add(a, b);
    print(sum); // We can use cout function but using user defune
                // function for understanding the vooid function.
    
    
    return 0;
}
// Printing Function
void print(int num)
{
    cout << num << endl;
}
// adding Function
int add(int num1, int num2)
{

    int sum;
    sum = num1 + num2;

    return sum;
}