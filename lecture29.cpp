/*#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >>n ;
    int ** arr = new int *[n];
    for(int i = 0 ; i < n ; i++){
        arr[i] =new int[n];
    }
    //creation done here 

    // taking input 
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> arr[i][j];
        }
    }
    //output 
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
*/
//for different number of rows and columns 

#include<iostream>
using namespace std;
int main(){
    int row ;
    int colums; 
    cin >> row >> colums ; 
    int ** arr = new int *[row];
    for(int i = 0 ; i < row ; i++){
        arr[i] =new int[colums];
    }
    //inpput 
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < colums ; j++){
            cin >> arr[i][j];
        }
    }
    //output 
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < colums ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    //deleting memory(releasing memory)
    for(int i = 0 ; i < row ; i++){
        delete [] arr[i];
    }
    delete [] arr;
    return 0;
}