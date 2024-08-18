// Macros, Global Variables , inline functions AND defualt args
// Macros
/*#include <iostream>
using namespace std;
#define PI  3.14 // defining macro
int main()
{
    int r = 2;
    double area = PI* r * r;
    //Pi = PI+1; //(not possible)
    cout << "Area: " << area << endl;
    return 0;
}*/

// Global Variables
#include <iostream>
using namespace std;
int score = 58;
void a(int i)
{
    cout << score << " in a " << endl;
    cout << i << endl;
}
void b(int i)
{
    cout << score << " in b " << endl;
    cout << i << endl;
}
int main()
{
    int i = 5;
    cout << score << " in main function " << endl;
    a(i);
    b(i);
    return 0;
}