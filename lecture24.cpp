// basic maths for DSA

// prime number calculation
/*#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if(n <=1){
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter a number";
    cin >> n;
    if (isPrime(n))
    {
        cout << n << " is a prime number";
    }
    else
    {
        cout << n << " is not a prime number";
    }
    return 0;
}*/
//GCD
/*#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(a==0) return b ;
    if(b==0) return a ;

    while(a!=b){
        if(a>b)  a = a - b;
        else  b = b - a;
    }
    return a ;
}
 int main(){
    int a, b ;
    cout << "Enter the values of a and b :";
    cin >> a >> b;

    int ans= gcd(a ,b) ;
    cout << "GCD of " << a << " and " << b << " is: " << ans << endl;
 }*/