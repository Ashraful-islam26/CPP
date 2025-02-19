#include <bits/stdc++.h>
using namespace std;
// Find the First Non-Repeating Character

void firstNonRepeatingCharacter(string s);

int main()
{

    string s;
    cin >> s;
    firstNonRepeatingCharacter(s);
    return 0;
}

void firstNonRepeatingCharacter(string s)
{
    unordered_map<char, int> freq;
    for (char c : s)
        freq[c]++;

    for (char c : s)
    {
        if (freq[c] == 1)
        {
            cout << c << endl;
            return;
        }
    }
    cout << "-1" << endl;
}
