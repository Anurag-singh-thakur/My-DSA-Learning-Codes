/*
#include <iostream>
using namespace std;

void update(int **p)
{
    //  p = p + 1;
    //*p = *p + 1;
    **p += 1;
}
int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    cout << "All set" << endl;
    cout << "printing p: " << p << endl;
    cout << "printing address of p: " << &p << endl;
    cout << *p2 << endl;
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;
*/
    /*
        cout << "Before";
        cout << i << endl;
        cout << p << endl;
        cout << *p2 << endl;
        update(p2);
        cout << "After";
        cout << i << endl;
        cout << &p << endl;
        cout << p2 << endl;

        
    cout << "Before..: " << **p2 << endl;
    update(p2);

    cout << "After..: " << **p2 << endl;
    return 0;
}*/

//practice problems done aage.............
/*#include<iostream>
using namespace std;
int main(){
    int first = 8; 
    int second = 18 ;
    int *ptr = &second; 
    *ptr =9 ; 
    cout<<first<<" "<<second<<" "<<endl;
    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int first = 6; 
    int *p = &first; 
    int *q = p ; 
    (*q)++; 
    cout<<first<<endl ;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int first = 8;
    int*p = &first;  
    cout<<(*p)++<<endl ; //8
    cout<<first<<" "<<endl; //9 
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int *p= 0 ;  //null pointer-->segementation fault aayega
    int first = 110 ;
    *p = first ; 
    cout<<*p<<endl ;
    return 0;
}
*/


/*#include<iostream>
using namespace std;
int main(){
    int first = 8 ;
    int second = 11; 
    int *third =  &second; 
    *third = *third +2 ;
    cout<<first<<" "<<second<<endl ;
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main(){
    float f = 12.5 ;
    float p = 21.5 ;
    float *ptr = &f ;
    (*ptr)++ ;
    *ptr = p ; 
    cout<<*ptr<<f<<p<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int arr[5] ; 
    int *ptr ; 
    cout<<sizeof(arr)<< " " <<sizeof(ptr)<<endl;
    return 0;
}
*/

#include<iostream>
using namespace std;
int main(){
    int arr[]= {11,21,13,14}; 
    cout<<*(arr)<<" "<<*(arr+1)<<endl; 

    return 0;
}