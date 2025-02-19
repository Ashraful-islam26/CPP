#include <bits/stdc++.h>
using namespace std;
// WAVE SORT
/*Wave Sort is a sorting technique that arranges an array in a wave-like pattern, meaning
For every alternate element, arr[i] should be greater than or less than its adjacent elements*/

void waveSort(vector<int> &arr);

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    waveSort(arr);

    for (int num : arr)
        cout << num << " ";
    cout << endl;
    return 0;
}

void waveSort(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}
