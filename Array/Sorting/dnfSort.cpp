#include <bits/stdc++.h>
using namespace std;
// DUTCH NATIONAL FLAG (DNF) SORT
/*The Dutch National Flag (DNF) Sort is an efficient algorithm
 used to sort an array containing three distinct elements (commonly 0s, 1s, and 2s)
  It is a variation of the three-way partitioning algorithm and runs in O(n)
  time complexity with O(1) space complexity.*/

void dnfSort(vector<int> &arr);

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    dnfSort(arr);

    for (int num : arr)
        cout << num << " ";
    cout << endl;
    return 0;
}

void dnfSort(vector<int> &arr)
{
    int low = 0, mid = 0, high = arr.size() - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
            swap(arr[low++], arr[mid++]);
        else if (arr[mid] == 1)
            mid++;
        else
            swap(arr[mid], arr[high--]);
    }
}
