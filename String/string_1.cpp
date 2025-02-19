#include <bits/stdc++.h>
using namespace std;
// Reverse a String

void reverseString(string s);

int main()
{

    string s;
    cin >> s;
    reverseString(s);
    return 0;
}

void reverseString(string s)
{
    reverse(s.begin(), s.end());
    cout << s << endl;
}
