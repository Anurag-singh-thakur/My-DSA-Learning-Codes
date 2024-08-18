#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("Hello");
    q.push("Anurag");
    q.push("singh");
    cout << "First element is: " << q.front() << endl;
     q.pop();
    cout << "After popping first element: " << q.front() << endl;
    cout<<"size after pop: " << q.size() << endl;
    return 0;
}