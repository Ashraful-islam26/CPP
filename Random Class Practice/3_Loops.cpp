#include <iostream>
using namespace std;

int main()
{

    // Palindromic Prime Number Using  loop

    int num;
    int Digit;
    int reverseDigit=0;
    cout << "Enter Number: ";
    cin >> num;
    int dummyNum=num;

    int flag1 = 1;
    int flag2 = 0;

    // checking prime
    for (int i = 2; i <=num / 2; i++)
    {
        if (num % i == 0)
        {
            flag1 = 0;
            break;
        }
    }

    // reversing the number
    if (flag1 == 1)
    {
        while (dummyNum != 0)
        {

            Digit = dummyNum % 10;
            reverseDigit = reverseDigit * 10 + Digit;

            dummyNum /= 10;
        }
    }

    if (num == reverseDigit)
    {
        cout << "Palindromic Prime!";
    }
    else
    {
        cout << "Not a Palindromic Prime !";
    }

    return 0;
}