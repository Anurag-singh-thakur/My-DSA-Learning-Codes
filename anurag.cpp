#include <iostream>
using namespace std;
int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while(s<=e){
        if(arr[mid]>=arr[0]){
            s =mid+1; 
        }
        else{
            e = mid;
        }
    }
}

int main()
{
    int arr[5] = {8, 10, 17, 1, 3};
     int pivot = getPivot(arr, 5);

    cout<<pivot<<endl;
    return 0;
    
}