//Making a simple calculator using C++
#include <iostream>
using namespace std;

int main()
{

    int num1, num2;
    char operation;

    cin >> num1 >> operation >> num2;

    switch (operation)
    {
    case '+':
    {
        int sum = num1 + num2;
        cout << sum;
        break;
    }
    case '-':
    {
        int minus = num1 - num2;
        cout << minus;
        break;
    }
    case '*':
    {
        int mult = num1 * num2;
        cout << mult;
        break;
    }
    case '/':
    {
        if (num2 > 0)
        {
            int div = num1 / num2;
            cout << div;
            break;
        }
        else
        {
            cout << "Math Error" << endl;
        }

        break;
    }

    default:
    {
        cout << "Worong Arthmetic Operation";
        break;
    }
    }

    return 0;
}