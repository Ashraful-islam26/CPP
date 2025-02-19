#include <bits/stdc++.h>
using namespace std;
// Count the Number of Distinct Substrings

void countDistinctSubstrings(string s);

int main()
{

    string s;
    cin >> s;
    countDistinctSubstrings(s);
    return 0;
}

void countDistinctSubstrings(string s)
{
    unordered_set<string> substrings;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        string sub = "";
        for (int j = i; j < n; j++)
        {
            sub += s[j];
            substrings.insert(sub);
        }
    }
    cout << substrings.size() + 1 << endl; 
}
