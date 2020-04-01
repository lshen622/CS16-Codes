#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]){
    if (argc != 2){
        cout << "the command line should be exacly like: ";
        cout << argv[0] << " n" << endl;
        exit(1);
    }



    
   int x = atoi (argv[1]);

    //cin >> x;
    if (x%3==0 && x%5==0){
        cout << "fizzbuzz"<< endl;

    }
    
    else if (x%3==0){
        cout << "fizz" <<endl;

    }
    
    else if (x%5==0){

        cout << "buzz" << endl;
    }
    
    else{
        cout << x;
    }

    return 0;


}