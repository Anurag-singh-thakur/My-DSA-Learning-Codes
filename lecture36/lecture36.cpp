#include <iostream>
using namespace std;
// partition function

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivot)
        {
            cnt++;
        }
    }
    // right place of the pivot
    int pivotIndex = s + cnt;
    // swap
    swap(arr[pivotIndex], arr[s]);

    // ab left and right wala part sambhal lete hai...

    int i = s;
    int j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // partition karege
    int p = partition(arr, s, e);
    // left part sort karo

    quickSort(arr, s, p - 1);
    // right part sort karo
    quickSort(arr, p + 1, e);
}
int main()
{
    int arr[15] = {23, 54, 76, 87, 34, 12, 43, 43, 65, 87, 90, 9, 21, 98, 100};
    int n = 15;
    int s = 0;
    int e = n - 1;
    quickSort(arr, s, e);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}  