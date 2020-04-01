#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "enter #: " << endl;
    cin >> x;
    if (x%3==0 && x%5==0){
        cout << "fizzbuzz"<< endl;

    }
    
    else if (x%3==0){
        cout << "fizz" <<endl;

    }   else if (x%5==0){

        cout << "buzz" << endl;
    }
    
    
    else{
        cout << x;
    }

    return 0;


}