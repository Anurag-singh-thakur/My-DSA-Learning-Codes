#include <iostream>
using namespace std;
void print(int *p){
  cout<<*p<<endl;//prints value
  //cout<<p<<endl; //prints address
}
void update(int *p){
  //  p = p+1 ;
  //  cout<<"Inside: "<<p<<endl;
  *p = *p + 1;
  //  cout<<"After: "<<p<<endl;
}

int getSum(int *arr, int n){
  cout<<"Size of the array will be: "<<sizeof(arr)<<endl;//8
  int sum = 0;
  for(int i=0;i<n;i++){
    sum += arr[i];
  }
  return sum;
}
int main()
{
  // int arr[10] {23 ,122 ,41,67} ;
  /*
  cout<<"Address of first memory block is "<<arr<<endl;
  cout<<"Address of first memory block is "<<&arr[0]<<endl;
  cout<<"Address of second memory block is "<<&arr[1]<<endl;

  cout<<"trial 1: "<<*arr<<endl; //2
  cout<<"trial 2: "<<(*arr)+1<<endl; //3
  cout<<"trial 2: "<<*(arr)+1<<endl; //3
  cout<<"trial 3: "<<*(arr+1)<<endl; // 5
  cout<<"trial 4: "<<*arr+6<<endl; //8

  cout<<"trial 5: "<<arr[2]<<endl; //41
  cout<<"trial 6: "<<*(arr+2)<<endl; //41

  int i =3 ;
  cout<<i[arr]<<endl; //67(chalaki+++)


  int temp[10] ={1,2};
  cout<<sizeof(temp)<<endl;//40
  cout<<sizeof(*temp)<<endl;//4
  cout<<sizeof(&temp)<<endl;//8



  int *ptr =  &temp[0] ;
  cout<<sizeof(ptr)<<endl; //8
  cout<<sizeof(*ptr)<<endl; //4
   cout<<sizeof(&ptr)<<endl; //8

  int a[20] = {1,2,3,4} ;
  cout<<&a[0]<<endl; //address
  cout<<&a<<endl;
  cout<<a<<endl;

  int *p = &a[0];
  cout<<p<<endl;
  cout<<*p<<endl;

   int arr[10];
 //  arr = arr+1 ;//(error)
   //cout<<arr<<endl; //adress of next block
   int *ptr = &arr[0];
   cout<<ptr<<endl;;
   ptr = ptr+1;
   cout<<ptr<<endl;
    cout<<&p<<endl; //adress
    

  // CHARACTER ARRAYS
  int arr[5] = {1, 2, 3, 4, 5};
  char ch[6] = "abcde";
  cout<<arr<<endl;
  cout<<ch<<endl;
  char  *c = &ch[0] ;
  //prints the entire string as the implementation in int and char arrays is different

  cout<<c<<endl;

  char temp = 'z';
 char *p = &temp; 
  cout<<p<<endl; //z ye or b chije print karta jayega jab tk usko null character nahi milega
  */

  int value = 5 ;
  int *p = &value; 
  print(p); // 5
  update(p); 
  print(p); // 5

 int arr[6] ={1,2,3,4,5,8};
 cout<<"Sum is: "<< getSum(arr ,6) <<endl;;
 cout<<"Sum is: "<< getSum(arr+3 ,3)<<endl ;
  return 0;
}