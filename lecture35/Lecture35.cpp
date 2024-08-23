//this question having the SC of O(n)
//this question having the TC of O(nlogn)
#include <iostream>
using namespace std;
void merge(int *arr, int start, int end)
{
    int mid = (start + end) / 2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];
    // copy values in first and second arrays

    int mainArrayIndex = start;

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }
   mainArrayIndex = mid + 1;

    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }
    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] <= second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }
   while (index2 < len2)
{
    arr[mainArrayIndex++] = second[index2++]; // corrected
}
    delete [] first ;
    delete [] second;
}
void mergeSort(int arr[], int start, int end)
{ // base
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;
    // left part sort karna hai 
    mergeSort(arr, start, mid);
    // right part sort karna hai
    mergeSort(arr, mid + 1, end);
    // merge dono parts
    merge(arr, start, end);
}
int main()
{
    int arr[15] = {2, 5, 1, 6, 9,43,54,65,6,43,231,32,43,54,21};
    int n = 15;
    mergeSort(arr, 0, n - 1);
    for(int i =0 ;i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}