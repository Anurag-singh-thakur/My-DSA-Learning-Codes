#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l ;
    l.push_back(1);
    l.push_front(2);
    for(int i:l){
        cout<<i<<" ";  // Output: 2 1
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"After Erase ";
    for(int i:l){;
        cout<<i<<" ";  // Output: 1
    }
    cout<<endl;
    cout<<"size of list"<<l.size()<<endl;

    //copying list 
    list<int> n(l);
    cout<<"Copied list ";
    for(int i:n){
        cout<<i<<" ";  // Output: 1
    }
    cout<<endl;
    //declaring array with size and defual element
    list<int> p(10 , 2);
    for(int i:p){
        cout<<i<<" ";  // Output: 2 2 2 2 2 2 2 2 2 2
    }
    return 0;
}