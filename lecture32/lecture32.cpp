/*#include <iostream>
using namespace std;
void reachHome(int src, int dest)
{
    cout << "Source " << src << "destination " << dest << endl;
    // base case
    if (src == dest)
    {
        cout << "The person has reached home at " << src << endl;
        return;
    }
    // processing
    src = src + 1;
    // recursive case
    reachHome(src, dest);
}
int main()
{
    int dest = 10;
    int src = 1;
    cout << endl;
    reachHome(src, dest);
    return 0;
}*/

//fibonacci series 
//leetcode problem 509
/*class Solution {
public:
    int fib(int n) {
      if(n==0) return 0;
      if(n==1) return 1 ;

      int ans = fib(n-1)+fib(n-2);
      return ans;  
    }
};*/
//ways to climb nth stairs 
/*#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) {
    //base case 

    if(nStairs<0) return 0; 
    if(nStairs==0) return 1;

    //Recursive Call
    int ans = countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
    return ans;

}*/

//say digits 
/*#include<iostream> 
using namespace std;

void sayDigit(int n, string arr[]) {

    //base case
    if(n == 0)
        return ;

    //processing 
    int digit = n % 10;
    n = n / 10;
    

    //recursive call
    sayDigit(n, arr);

    cout << arr[digit] << " ";

}

int main() {

    string arr[10] = {"zero", "one", "two", "three",
                         "four", "five", "six"
                        , "seven", "eight", "nine"};
    int n;
    cin >> n;

    cout << endl << endl << endl ;
    sayDigit(n, arr);
    cout << endl << endl << endl ;


    return 0;
}*/

