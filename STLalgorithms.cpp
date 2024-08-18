#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    
    vector<int> v ;
    v.push_back(1); 
    v.push_back(3); 
    v.push_back(6); 
    v.push_back(7);

    cout<<binary_search(v.begin(),v.end() ,5 ); //output 0 as 5 is not present
    cout<<endl;
    cout<<binary_search(v.begin(),v.end() ,6 ); //output 1 as 6 is  present

    cout<<endl ;
    cout<<"finding the lower bound for 6 is "<<lower_bound(v.begin(),v.end() ,6) - v.begin()<<endl;
     cout<<endl ;

     cout<<"finding the upper bound for 6 is "<<upper_bound(v.begin(),v.end() ,6) - v.begin()<<endl;

     int a =  3; 
     int b = 5; 
     cout<<"maximum of a , b"<<max(a,b)<<endl;
     cout<<"minimum of a , b"<<min(a,b)<<endl;

     swap(a,b);
     cout<<"after swapping a = "<<a<<"and b = "<<b<<endl;

     string abcd = "Anurag sigh thakur " ;
     reverse(abcd.begin(),abcd.end());
     cout<<abcd<<endl;

    rotate(v.begin() ,v.begin() +1 , v.end());
    cout<<"after rotation"<<endl;
    for(int i : v) cout<<i<<" "; cout<<endl;

     sort(v.begin(),v.end()); // this inbuilt functio is based on the intro sort algorithm which is made of using three different algorithms(quicksort , heapsort and insertion sort algorithm);
     cout<<"after sort"<<endl;
    for(int i : v) cout<<i<<" "; cout<<endl;
    
    return 0;
}