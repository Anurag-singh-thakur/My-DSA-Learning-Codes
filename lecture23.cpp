
/*
#include <iostream>
using namespace std;
bool isPresent(int arr[][4], int target, int row, int column)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == target)
            {
                return true;
            }
        }
    }
    return 0;
}*/
// int main()
//{
//  create 2d array
// int arr[3][4];
//  int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
// int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
// taking input of 2d array --> row wise input
//  for (int row = 0; row < 3; row++)
// {
//   for (int column = 0; column < 4; column++)
//{
//      cin >> arr[row][column];
// }
//}
// column wise input
/* for (int col = 0; col < 4; col++)
 {
     for (int row = 0; row < 3; row++)
     {
         cin >> arr[row][col];
     }
 }*/
// print results;
/*
 for (int row = 0; row < 3; row++)
 {
     for (int col = 0; col < 4; col++)
     {
         cout << arr[row][col] << " ";
     }
     cout << endl;
 }*/
/*
 int target;
 cout << "Enter the element to search for" << endl;
 cin >> target;*/
/*

    if (isPresent(arr, target, 3, 4))
    {
        cout << "Target Found" << endl;
    }
    else
    {
        cout << "Target Not Found" << endl;
    }
    return 0;
}
*/

// row-wise sum question

#include <iostream>
#include <climits>
using namespace std;
// function for row-wise sum question
//to print col wise sum 
void printColSum(int arr[][3], int row, int col)
{
    cout<<"Printing sum-->"<<endl;
    for (int col = 0; col < 3; col++)
    {
    int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " " << endl;
    }
}
//to print row wise sum 
void printSum(int arr[][3], int row, int col)
{
    cout<<"Printing sum-->"<<endl;
    for (int row = 0; row < 3; row++)
    {
    int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " " << endl;
    }
}
int largestRowSum(int arr[][3], int row , int col){

    int maxi =  INT_MIN ;
    int rowIndex = -1 ; 
    for (int row = 0; row < 3; row++)
    {
    int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if(sum > maxi){
            rowIndex = row ;
            maxi = sum;
        }
    }
    cout<<"The maximimum sum is "<<maxi<<endl;
    return rowIndex ;
}
int main()
{
    int arr[3][3];
    cout << "Enter the value in the array:" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << "Entered elements are:" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col];
        }
    }
    // cout << endl;
    // printSum(arr, 3, 3);
    // cout << endl;
    // printColSum(arr, 3, 3);
    cout << endl;
   int ansIndex = largestRowSum(arr, 3, 3);
   cout<<"Max row sum is at "<< ansIndex<<endl;
    return 0;
}