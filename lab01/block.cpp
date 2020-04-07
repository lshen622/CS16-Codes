#include <iostream>
using namespace std;

int main(){
    int row, column;
    cout << "Enter number of rows and columns:" << endl;
    cin >> row >> column;
    while (row >0 && column >0){
    
        for (int i=0; i<row; i++){
            for(int j =0; j<column; j++){
                cout<< "X.";
                }    
                cout << endl;
        }
    cout << "Enter number of rows and columns:" << endl;
    cin >> row >> column;
    }
    
    return 0;
}