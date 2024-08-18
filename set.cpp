#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(5);
//set me har ek element different hoga (every  element must be unique)
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(0); //complexity will be O(log n)
     s.insert(0);   
    for(auto i:s){
        cout<<i<<" ";  // output: 0 1 3 5(output will must be sorted )
    }
     cout<<endl;
    //  s.erase(s.begin());
    
    //     for(auto i:s){
    //     cout<<i<<" ";  // output: 0 1 3 5(output will must be sorted )
    // }
     set<int>::iterator it =  s.begin();
     it++; //
     s.erase(it);

    for(auto i:s){
        cout<<i<<" ";  
    }
    cout<<endl;


    cout<<"tells whether this element is present or not "<<s.count(5)<<endl;
    cout<<endl;
    cout<<"tells whether this element is present or not "<<s.count(-5)<<endl;


    set<int>::iterator itr =s.find(5);
    cout<<"value present at iterator is "<<*itr<<endl;

    for(auto it = itr ; it != s.end() ; it++){
        cout<<*it; 
    }cout<<endl;
    return 0;
}