// reversing a string using the recursion
/* #include<iostream>
using namespace std;
void reverse( string &s ,int i , int j )
{
    //base case
    if(i>j)
        return;
    swap(s[i],s[j]);
    i++ , j-- ;
  reverse(s,i,j);
}
int main(){
    string name = "anurag";
    int i =0 ;
    int j = name.length()-1;
    reverse(name,i,j);
    cout<<name<<endl;

    return 0;
} */

// check palindrome using the recursion
/* #include <iostream>
using namespace std;
bool checkPalindrome(string &s, int i, int j)
{
    // base case
    if (i > j)
        return true;
    if (s[i] != s[j])
        return false;
    else
    {

        return checkPalindrome(s, i++, j--);  // recursive call
    }
}

int main()
{
    string name = "anurag singh";
    cout << endl;
    bool ans = checkPalindrome(name, 0, name.length() - 1);
    if (ans)
    {
        cout << name << " is a palindrome" << endl;
    }
    else
    {
        cout << name << " is not a palindrome" << endl;
    }
    return 0;
} */

// power of variables using the recursion function which is more efficient
/* #include<iostream>
using namespace std;
int power(int a , int b){

    if(b==0) return 1 ;   //base case
    if(b==1) return a ;   //base case
    //recursive case
    int ans = power(a , b/2);
    ///if b is even
    if(b%2==0){
        return ans*ans ;
    }else{ //when b is odd
        return a*ans*ans ;
    }

}
int main(){
    int a , b ;
    cout<<"Enter the value of a "<<endl;
    cin >> a;
    cout<<"Enter the value of b "<<endl;
    cin >> b;
    int ans = power(a ,b);
    cout<<"Ans is "<<ans<<endl;
    return 0;
}   */

// Sorting using recursion

#include <iostream>
using namespace std;
int sortArray(int *arr, int n)
{

    if (n == 0 || n == 1)
        return true; // base case
    // ek case khud kar lo baaki recursion kar lega khud   (largest element ko end me rakh dega)
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    // recursive calll
    sortArray(arr, n - 1);
}
int main()
{
    int arr[11] = {2, 5, 1, 6, 7, 9, 76, 43, 65, 76, 43};

    sortArray(arr, 5);
    for (int i = 0; i < 11; i++)

    {
        cout << arr[i] << " ";
    }
    return 0;
}