#include<iostream>
#include<stack>
#include<stdlib.h>
using namespace std;
int main(){
    stack<string> s;  
    s.push("Anurag");   
    s.push("kumar");   
    s.push("singh");
    // for(int i :s){
    //     cout<<i<<endl;
    // }   
    cout<<"top element :"<<s.top()<<endl;
    s.pop();
    cout<<"top element after pop :"<<s.top()<<endl;
    cout<<"sie of stack :"<<s.size()<<endl;
    cout<<"empyt or not : "<<s.empty() ;

    return 0;
}