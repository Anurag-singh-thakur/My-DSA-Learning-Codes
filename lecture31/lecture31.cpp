//factorial of n using the recursive function
/*#include <iostream>
using namespace std;
int factorial(int n)
{
    
     if (n == 0) /// base case
        return 1;
    return n * factorial(n - 1);
    ;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int ans = factorial(n);
    cout << "Factorial of " << n << " is: " << ans << endl;
    return 0;
}*/

//POWER OR TWO QUESTION USING RECURSION FUNCTION
/*#include<iostream>
using namespace std;
int power(int n){
    if(n==0) return 1; //base case
    //recursive relation
     return 2*power(n-1);
}
int main(){
    int n ;
    cin >> n;
    int ans = power(n);
    cout << "The power of 2 raised to " << n << " is: " << ans << endl;
    return 0;
}*/

//printing the counting 

#include<iostream>
using namespace std;
void print(int n){
    if(n==0){ //base case
        return ;
    } 
    print(n-1); //recursive call
     cout<<n<<endl;
    
 
}
int main(){
    int n ;
    cin>>n ; 
    cout<<endl;
   print(n) ;
   
    return 0;
}