#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m[2] = "Anurag";
    m[13] = "kumar";
    m[1] = "SIngh";

    m.insert({5, "Anurag2"});
    cout << "before erase" << endl;
    for (auto i : m)
    {
        cout << i.first << "-->" << i.second << endl; //  (output will be in sorted order )
    }
    cout << endl;

    cout << "finding 13--> " << m.count(13) << endl;  // 1
    cout << "finding 13--> " << m.count(-13) << endl; // 0
    cout << "after erase" << endl;
    // m.erase(13);
    for (auto i : m)
    {
        cout << i.first << "-->" << i.second << endl; //  (output will be in sorted order )
    }
    cout << endl;


    auto it=  m.find(5) ;
      for(auto i = it ; i != m.end() ;i++){
        cout<<(*i).first<<endl;
      }  

    return 0;
}