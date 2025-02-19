#include <bits/stdc++.h>
using namespace std;
// Quick Sort Algorithm
/*Quick Sort is a sorting algorithm based on
the Divide and Conquer that picks an element
 as a pivot and partitions the given array around
  the picked pivot by placing the pivot in its correct position in the sorted array.*/

void quickSort(vector<int> &arr, int low, int high);
int partition(vector<int> &arr, int low, int high);

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quickSort(arr, 0, n - 1);

    for (int num : arr)
        cout << num << " ";
    cout << endl;
    return 0;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            swap(arr[++i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
