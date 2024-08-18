/*#include<iostream>
using namespace std;
int& func(int a){
    int num = a ; 
    int& ans = num;  
    return ans;
}
void update2(int &n){ //the argument of this function is a reference variable
    n++ ;
}
void update(int n){
    n++ ;
}
int main(){
   /* int i =5 ;
    int &j = i; 
    cout << "Value of i: " << i << endl;
    cout << "Address of i: " << &i << endl;
    cout << "Value of j: " << j << endl;
    cout << "Address of j: " << &j << endl;
    i++ ; j++; 
    cout<<"i="<<i<<endl;
    cout<<"j="<<j<<endl;
    
   int n =5 ;
    //cout<<"Before n="<<n<<endl;
   //update(n);
  // update2(n);
   func(n);
   cout<<"After n="<<n<<endl;
   return 0;
}*/

//ARRAYS 
#include<iostream>
using namespace std;
int getSum (int *arr , int n){
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
  /* char * ch =  new char;
    *ch = 'A';
     cout<<*ch<<endl;
     cout<<sizeof(ch)<<endl;
     cout<<sizeof(*ch)<<endl;
     */ 
    int n ; 
    cin>>n;
    //variable sized array 
    int * arr = new int[n]; //allocating memory
    for(int i =0 ;i <n ; i++){
        cin>>arr[i] ;
    }
    int ans = getSum(arr,n); 
    cout<<"Sum of array elements: "<<ans<<endl;
    delete[] arr; //deallocate memory
    return 0;
}