#include <iostream>
using namespace std;
int main()
{
    // int num = 5;
    // cout << num << endl;
    // //address of operator &
    // cout<<"address of num is"<<&num<<endl;

    // int *ptr = &num ;
    // cout<<"value is: "<< ptr<<endl;
    // cout<<"value is: "<<*ptr<<endl;

    // double d = 4.3 ;
    // double *p2 = &d ;
    // cout<<"address of d is: "<<p2<<endl;
    // cout<<"value of d is: "<<*p2<<endl;
    // cout<<"size of integer is: "<<sizeof(num)<<endl;
    // cout<<"size of pointer is: "<<sizeof(ptr)<<endl;
    // cout<<"size of double  is: "<<sizeof(double)<<endl;
    // cout<<"size of pointer is: "<<sizeof(p2)<<endl;

    // pointer to int is created and pointing to some garbage address
   /* int i = 5;
    // int *p = &i ;

    int *p = 0;
    int *q = &i ;
    p = &i;
    cout << p << endl;
    cout << *p << endl;

    cout << q << endl;
    cout << *q << endl; 
    */

    int num =5 ;
    int a = num ;
    a++ ;
    cout << " before a: " << a << endl;
    cout << "after num: " << num << endl; //no effect on the value of num 

    int *p = &num;
    cout<<"before: "<<num << endl;
    *p = *p + 1 ; //(*p)++ ;
     cout<<"After: "<<num << endl;

    //copying a pointer 
    int *q = p;
    cout<<"p:"<<p << endl;
    cout<<"q:"<<q << endl;

    cout<<"*p:"<<*p << endl;
    cout<<"*q:"<<*q << endl;
   
   int i =3 ;
   int *t = &i ;
//    cout<<t<<endl;
//    cout<< *t++ << endl;
//     cout<<t<<endl ;


    *t = *t+1; //value stored at address t  = t +1 
    cout<<*t<<endl; 
    cout<<"Before t:"<<t<<endl ;
    t =t+1 ;
    cout<<*t<<endl;
    cout<<"After t:"<<t<<endl ;

    return 0;
}