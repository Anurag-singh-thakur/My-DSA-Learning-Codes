#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max-heap
    priority_queue<int> maxi ;
    //min-size 
    priority_queue<int, vector<int>, greater<int>> mini ;


    maxi.push(10);
    maxi.push(20);
    maxi.push(30);
    maxi.push(40);
    cout<<"size: "<<maxi.size()<<endl;
    int n = maxi.size();
    for(int i = 0; i < n ; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl ;

     mini.push(6);
    mini.push(4);
    mini.push(3);
    mini.push(2);
    int m = mini.size();
    for(int i = 0; i < n ; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl ;

    cout<<"khali hai ya nahi ye :"<<maxi.empty()<<endl; 
    cout<<"khali hai ya nahi ye :"<<mini.empty()<<endl; 
    return 0;
}