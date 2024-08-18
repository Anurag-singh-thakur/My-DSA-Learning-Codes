//doubly ended que (all opeartion can be performed from both the sides of the que)

#include<iostream>
#include<deque>
using namespace std;
int main(){
    
    deque<int> d;

    // adding elements to the deque
    d.push_back(10);
    
    d.push_back(30);
    d.push_front(40);
    d.push_front(20);
    // for( int i:d){
    //     cout<<i<<" ";
    // }
    // d.pop_back();
    //  for( int i:d){
    //     cout<< i<<" ";
    // }
    //  d.pop_front();
    //   for( int i:d){
    //     cout<< i<<" ";
    // }

    cout<<"first index elements"<<d.at(1)<<endl;
    cout<<"first   element"<<d.front()<<endl;
    cout<<"last  element"<<d.back()<<endl;
    cout<<"empty or not : "<<d.empty()<<endl;
    cout<<"before erase "<<d.size()<<endl;
    // d.erase(d.begin(),d.end());
    // cout<<"after erase "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"after erase "<<d.size()<<endl;

    for(int i:d){
        cout<<i<<" ";
    }

    //size become 0 after erase but the max size ( jitni memory allocate hoti hai deque ko  ) remains as it is  ;
    return 0;
}