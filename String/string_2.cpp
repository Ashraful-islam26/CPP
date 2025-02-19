#include <bits/stdc++.h>
using namespace std;
// Check if a String is a Palindrome

void isPalindrome(string s);

int main()
{

    string s;
    cin >> s;
    isPalindrome(s);
    return 0;
}

void isPalindrome(string s)
{
    string rev = s;
    reverse(rev.begin(), rev.end());
    cout << (s == rev ? "YES" : "NO") << endl;
}
