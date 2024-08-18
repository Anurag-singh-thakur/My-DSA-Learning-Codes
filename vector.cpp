#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v ; // unknown size

    vector<int> a(5,1) ;// size will be 5 and the elements will be intialized by 1 other wise 0
    cout<<"Capacity: "<<v.capacity()<<endl;
   

    v.push_back(1);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;


    v.push_back(2);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;

    v.push_back(3);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;

    cout<<"Element at 2nd Index: "<<v.at(2)<<endl;
    cout<<" First Element : "<<v.front()<<endl;
    cout<<" Last Element : "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    v.pop_back();
    cout<<"\nafter pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }


     
    cout<<"\n before clear"<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;
    
  
    //clear vector (size = 0, but capacity not )
    v.clear();
    cout<<"\nAfter clear"<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;

    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" "; // alll elements are 1 
    }
    //copying the vector a into another vector

    vector<int> b(a);
    cout<<"\nb"<<endl;
    for(int i:b){
        cout<<i<<" ";
    }
    return 0;
}