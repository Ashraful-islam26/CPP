#include <iostream>
using namespace std;

int main()
{

    int n = 3;
    cout << "Enter Player-1 Number: ";
    int x;
    cin >> x;
    int guess;
    int flag = 0;

    // First guess
    if (flag == 0)
    {
        cout << "\nEnter Player-2 guess:- ";
        cin >> guess;

        if (guess == x)
        {
            cout << "Right, Player - 2 wins !";
            flag = 1;
        }
        else
        {
            cout << "Wrong, 2 Chance(s) Left !";
            cout << "\n";
        }
    }

    // Second Guess
    if (flag == 0)
    {
        cout << "\nEnter Player-2 guess:- ";
        cin >> guess;

        if (guess == x)
        {
            cout << "Right, Player - 2 wins !";
            flag = 1;
        }
        else
        {
            cout << "Wrong, 1 Chance(s) Left !";
            cout << "\n";
        }
    }
    // Third guess
    if (flag == 0)
    {
        cout << "\nEnter Player-2 guess:- ";
        cin >> guess;

        if (guess == x)
        {
            cout << "Right, Player - 2 wins !";
            flag = 1;
        }
        else
        {
            cout << "Wrong, 0 Chance(s) Left !";
            cout << "\n";
        }
    }

    if (flag == 0)
    {
        cout << "\nPlayer-1 Wins !";
    }

    return 0;
}