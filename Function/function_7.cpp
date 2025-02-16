#include <iostream>
#include <math.h>

using namespace std;
// Pythagorean triple

int max(int a, int b, int c);
bool check(int a, int b, int c);

int main()
{
    int x, y, z;
    cout << "Enter numbers:- ";
    cin >> x >> y >> z;

    if (check(x, y, z) == true)
    {
        cout << "Pythagorean triple";
    }
    else
    {
        cout << endl<<"Not a triplate";
    }

    return 0;
}

// Calculating Sum
int max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else if (c > a && c > b)
    {
        return c;
    }
}
bool check(int x, int y, int z)
{
    int maximum = max(x, y, z);
    int b, c;

    if (x == maximum)
    {
        b = y;
        c = z;
    }
    else if (y == maximum)
    {
        b = x;
        c = z;
    }
    else if (z == maximum)
    {
        b = x;
        c = y;
    }

    if (pow(maximum, 2) == ((pow(b, 2)) + (pow(c, 2))))
    {
        return true;
    }
    else
    {
        return false;
    }
}
