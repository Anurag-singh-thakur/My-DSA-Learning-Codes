/* #include<iostream>
using namespace std;
bool isSorted(int *arr , int size)
{
    if(size == 0|| size == 1) {return true;}
    if(arr[0]>arr[1]){return false;}
    else{
        bool remainingPart = isSorted(arr+1,size-1);
        return remainingPart;
    }
}
int main(){
    int arr[5] = {3,2,3,4,5};
    int size = 5 ;

    bool ans = isSorted(arr,size);
    if(ans){cout<<"Sorted";}
    else{
        cout<<"Not Sorted";
    }
    return 0;
}*/
// gettting sum of array elements using recursion
/*
    #include <iostream>
using namespace std;
int getSum(int *arr, int size)
{
    if (size == 0)
        return 0;
    if (size == 1)
        return arr[0];

    int remainingPart = getSum(arr + 1, size - 1);
    int sum = arr[0] + remainingPart;
    return sum;
}
int main()
{
    int arr[5] = {3, 2, 3, 14, 15};
    int size = 5;

    int sum = getSum(arr, size);
    cout << "Sum is : " << sum;
    return 0;
}
*/

// linear search question using recursion

/* #include<iostream>
using namespace std;
bool linearSearch(int *arr, int size , int key){

    if(size == 0){return false;}  //base case

     if(arr[0]==key){
        return true;
     }else{

        bool remainingPart = linearSearch(arr+1 , size-1 , key);
        return remainingPart;
     }

}
int main(){
    int arr[5] = {2,5,1,2,6};
    int size = 5;
    int key = 2 ;

    bool ans = linearSearch(arr, size , key);
    if(ans){
        cout<<"Element found "<<endl;
    }
    else{
        cout<<"Element not found "<<endl;
    }
    return 0;
} */

// binary search question using the recursion-->
/* #include <iostream>
using namespace std;
bool binarySearch(int *arr, int s, int e, int key)
{
    if (s > e)
    {
        return false;
    } // base case--> element not found
    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        return true;
    } // element found

    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, key);
    }
}
int main()
{
    int arr[6] = {2, 4, 6, 10, 14, 16};
    int size = 6;
    int key = 18;
    int ans = binarySearch(arr, 0, 5, key);
    if (ans)
    {
        cout << "ok" << endl;
    }
    else
    {
        cout << "not ok" << endl;
    }
    return 0;
} */

