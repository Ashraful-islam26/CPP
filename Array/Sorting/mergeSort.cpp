#include <bits/stdc++.h>
using namespace std;
// MERGE SORT
/*Merge sort is a sorting algorithm that follows
the divide-and-conquer approach. It works by recursively
dividing the input array into smaller subarrays and sorting those
subarrays then merging them back together to obtain the sorted array.*/

void mergeSort(vector<int> &arr, int left, int right);
void merge(vector<int> &arr, int left, int mid, int right);

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, 0, n - 1);

    for (int num : arr)
        cout << num << " ";
    cout << endl;
    return 0;
}

void mergeSort(vector<int> &arr, int left, int right)
{
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

void merge(vector<int> &arr, int left, int mid, int right)
{
    vector<int> temp;
    int i = left, j = mid + 1;

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }
    while (i <= mid)
        temp.push_back(arr[i++]);
    while (j <= right)
        temp.push_back(arr[j++]);

    for (int k = left; k <= right; k++)
        arr[k] = temp[k - left];
}
