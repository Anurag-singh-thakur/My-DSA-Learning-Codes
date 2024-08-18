//c++ STL video
#include<iostream>
#include<array>
using namespace std;
int main(){
   //basic array
   int basic[] ={1,2,3,4};
   //stl array
   //creating array
   array<int,4> a= {1,2,3,4};
   int size = a.size();
   cout<<size<<endl;
   cout<<"STL Array: ";
   for(int i=0;i<size;i++){
     cout<<a[i]<<" ";}
    cout<<"Element at 2nd Index: "<<a.at(2)<<endl;
    cout<<"Element at 3rd Index: "<<a.at(2)<<endl;
    cout<<"Empty or not "<<a.empty()<<endl;
    cout<<"First Element: "<<a.front()<<endl;
    cout<<"last Element: "<<a.back()<<endl;
    return 0;
}